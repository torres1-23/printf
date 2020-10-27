#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct _type - structure for types.
 * @tp: string type of character.
 * @f: pointer to function that prints.
 */

typedef struct _type
{
  char *tp;
  int (*f)();
} _type_t;
int _printf(const char *format, ...);
int (*get_func(char s))(va_list);
int _print_helper(const char *format, int i, int cont);
int p_char(va_list a);
int p_string(va_list a);
int p_int(va_list a);

#endif /* _HOLBERTON_H_ */
