#include "variadic_functions.h"
/**
 * sum_them_all - function calcul sum variable
 * @n: int variable
 * Return: int return
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list variablelist;
unsigned int i = n;
va_start(variablelist, n);
while (i != 0)
{
if (n == 0)
return (0);
else
{
sum = sum + va_arg(variablelist, int);
i--;
}
}
va_end(variablelist);
return (sum);
}
