#include "variadic_functions.h"
/**
 * print_strings - function strings print
 * @separator: char pointer
 * @n: unsigned int
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *c;
va_list vl;
va_start(vl, n);
for (i = 0; i < n; i++)
{
c = va_arg(vl, char *);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
if (i < n - 1 && separator)
{
printf("%s", separator);
}
}
printf("\n");
va_end(vl);
}
