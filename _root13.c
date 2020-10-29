#include "holberton.h"

/**
 *p_rootIE - Encrypts the given string using the root13 format
 * @a: String to encript and print
 * Return: string's digit length
 */
int p_rootIE(va_list a)
{
int i = 0, j = 0, len = 0, p = 0;
char rot13a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *cpy;
char *str;
str = va_arg(a, char*);
while (str[i] != '\0')
{
len++;
i++;
}
cpy = malloc(sizeof(char) * (len + 1));
if (!cpy)
return ('\0');
i = 0;
while (i <= len)
{
cpy[i] = str[i];
i++;
}
i = 0;
while (cpy[i] != '\0')
{
while (rot13a[j] != '\0')
{
if (cpy[i] == rot13a[j])
{
cpy[i] = rot13b[j];
break;
}
j++;
}
i++;
j = 0;
}
while (cpy[p] != '\0')
{
write(1, &cpy[p], 1);
p++;
}
free(cpy);
return (len);
}
