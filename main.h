#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;


int _printf(const char *format, ...);
int _putchar(char a);
int op_c(va_list op_l);
int op_s(va_list op_l);
int op_mod(va_list op_l);
int op_d(va_list op_l);
#endif
