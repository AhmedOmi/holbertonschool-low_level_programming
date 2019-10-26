#include "variadic_functions.h"
/**
 * print_numbers - function to print variadic caractere
 * @separator: char pointer
 * @n: unsigned integer
 * Return: void return function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list vl;
if (separator == NULL)
printf("\n");
else
{
va_start(vl, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(vl, int));
if (i < n - 1)
printf("%s", separator);
}
}
va_end(vl);
printf("\n");
}
