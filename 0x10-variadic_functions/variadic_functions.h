#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct _printf - Structure _printf
 * @fprint: char pointer
 * @func: function to list
 */

struct _printf
{
	char *fprint;
	void (*func)(char *, va_list);
};
typedef struct _printf _printf;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
