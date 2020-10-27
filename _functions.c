#include "holberton.h"

/**
 * p_char - writes the given char based on it´s value.
 * @a: Char to print
 * Return: 1.
 */
int p_char(va_list a)
{
	char c = va_arg(a, int);

	write(1, &c, 1);
	return (1);
}

/**
 * p_string - Writes the given string.
 * @a: String to print.
 * Return: 1.
 */
int p_string(va_list a)
{
	char *str;
	int i = 0;

	str = va_arg(a, char *);
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);

}

/**
 * p_int - Function to write an integer
 * @a: Integer to print
 * Return: Integer's digit length
 */
int p_int(va_list a)
{
	int n = va_arg(a, int);
	unsigned int len = 0, i, tmp, c, cont = 0;

	if (!n)
	{
		write(1, "0", 1);
		cont++;
		return (cont);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		cont++;
		n = -n;
	}
	tmp = n;
	while (n)
	{
		n = n / 10;
		len++;
	}
	n = 1;
	for (i = 1; i < len; i++)
		n = n * 10;
	for (i = 0; i < len; i++)
	{
		c = ((tmp / n) % 10) + '0';
		write(1, &c, 1);
		cont++;
		n = n / 10;
	}
	return (cont);
}
