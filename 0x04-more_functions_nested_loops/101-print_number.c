#include "holberton.h"
/**
 * print_number - prints
 * @n: integer
 * Return:  void
 */
void print_number(int n)
{
int i;
int c;
int t = 1;
int a = n % 10;
n = n / 10;
i = n;
if (a < 0)
{
a = a * -1;
c = c * -1;
n = n * -1;
_putchar('-');
}
if (i > 0)
{
while (i / 10 != 0)
{
i = i / 10;
t = t * 10;
}
while (t > 0)
{
c = n / t;
_putchar('0' + c);
n = n - c *t;
t = t / 10;
}
}
_putchar('0' + a);
}
