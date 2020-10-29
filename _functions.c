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

/**
 * p_bin - Function to write an unsigned int as binary
 * @a: Integer to print
 * Return: binary string length
 */
int p_bin(va_list a)
{
	unsigned int n = va_arg(a, unsigned int);
	unsigned int cont = 0, i = 0, j;
	char *c;

	if (n <= 0)
	{
		write(1, "0", 1);
		cont++;
		return (cont);
	}
	c = malloc(sizeof(char) * 32);
	if (!c)
		return (-1);
	while (n > 0)
	{
		if (n % 2 == 0)
			c[i] = '0';
		else
			c[i] = '1';
		n = n / 2;
		i++;
	}
	c[i] = '\0';
	for (j = 0; i > 0; j++)
	{
		write(1, &c[i - 1], 1);
		i--;
		cont++;
	}
	free(c);
	return (cont);
}

/**
 * p_revs - Function to write a reversed string
 * @a: String to reverse and print
 * Return: string length
 */
int p_revs(va_list a)
{
        char *str;
	unsigned int len = 0, i;

	str = va_arg(a, char *);
	if (!str)
		str = "(null)";
	while (str[len])
		len++;
	for (i = 0; len > 0; i++)
	{
		write(1, &str[len - 1], 1);
		len --;
	}
	return (i);
}
