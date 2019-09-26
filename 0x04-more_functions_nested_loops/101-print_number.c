#include "holberton.h"

/**
 * print_number - prints
 * @n: integer
 * Return:  void
 */
void print_number(int n)
{
int i = 1;
if (n < 0)
{
n = -n;
_putchar('-');
}
while (i < n)
i *= 10;
if (i > 10)
i /= 10;
while (i)
{
_putchar(n / i + '0');
n %= i;
i /= 10;
}
}
