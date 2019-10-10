#include "holberton.h"

/**
 * _sqrt - function sqrt
 * @i: integer
 * @x: ineger
 * Return: return int
 */
int _sqrt(int i, int x)
{
if (i * i == x)
return (i);
else if (i * i > x)
return (-1);
else
return (_sqrt(i + 1, x));
}

/**
 * _sqrt_recursion - void sqrt recursive
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else
return (_sqrt(1, n));
}
