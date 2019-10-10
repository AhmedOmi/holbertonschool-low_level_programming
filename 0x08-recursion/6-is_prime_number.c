#include"holberton.h"
#include<stdio.h>
/**
 * _prime - function
 * @i: int
 * @x: int
 * Return: void
 */
int _prime(int i, int x)
{
if (x <= 1 || !(x % i))
return (0);
else if (i > x / 2)
return (1);
else
return (_prime(i + 1, x));
}

/**
 * is_prime_number - function
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
else
return (_prime(2, n));
}
