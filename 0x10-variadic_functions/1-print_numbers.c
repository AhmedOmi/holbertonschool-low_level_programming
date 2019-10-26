#include "variadic_functions.h"
/**
 * print_numbers - function to print variadic caractere
 * @separator: char pointer
 * @n: unsigned integer
 * Return: void return function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list variablelsit;
va_start(variablelsit, n);
if (separator != NULL)
{
while (i < n)
{
printf("%s", separator);
printf("%d", va_arg(variablelsit, unsigned int));
i++;
}
}
else
{
printf("\n");
}
va_end(variablelsit);
printf("\n");
}