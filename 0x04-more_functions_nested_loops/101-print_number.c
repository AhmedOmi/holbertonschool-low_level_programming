#include "holberton.h"

/**
 * print_number - prints
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
int i = 1;
int s;
if (n < 0)
{
n = -n;
_putchar('-');
}
while (i < n)
i = i * 10;
if (i > 10)
i = i / 10;
while (i)
{
s = n / i;
_putchar(s + '0');
n = n % i;
i = i / 10;
}
}
