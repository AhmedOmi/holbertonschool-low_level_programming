#include"holberton.h"
#include<stdio.h>
/**
 * factorial - function facturiel recursive.
 * @n: int
 * Return: int
 */
int factorial(int n)
{
if (n == 1 || n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
