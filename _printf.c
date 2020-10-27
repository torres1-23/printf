#include "holberton.h"

/**
 * _printf - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list alist;
	int i = 0, cont = 0;

	if (!format)
		return (-1);
	va_start(alist, format);
	while (format[i] && format)
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			if (format[i + 1] != '%')
			{
				if (!get_func(format[i + 1]))
					cont = _print_helper(format, i, cont);
				else
				{
					cont += get_func(format[i + 1])(alist);
					i++;
				}
			}
			else
			{
				cont = _print_helper(format, i, cont);
				i++;
			}
		}
		else
			cont = _print_helper(format, i, cont);
		i++;
	}
	va_end(alist);
	return (cont);
}

/**
 * get_func - gets function needed.
 * @s: identifier.
 *
 * Return: Pointer to function.
 */
int (*get_func(char s))(va_list)
{
		_type_t _types[] = {
		{"c", p_char},
		{"s", p_string},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL}
	};
	int i = 0;

	while (_types[i].tp)
	{
		if (*_types[i].tp == s)
			return (_types[i].f);
		i++;
	}
	return (NULL);
}
/**
 * _print_helper - prints anything without a specificator.
 * @format: list of types of arguments passed to the function.
 * @i: position.
 * @cont: Number of characters printed
 *
 * Return: cont.
 */
int _print_helper(const char *format, int i, int cont)
{
	char c = format[i];

	write(1, &c, 1);
	cont++;
	return (cont);
}
