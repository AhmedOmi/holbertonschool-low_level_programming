#include "holberton.h"

/**
* print_number - functions print integer.
* @n: input integer.
* Return: no return.
*/
void print_number(int n)
{
int a, k, z;

if (n < 0)
{
_putchar(45);
a = n * -1;
}
else
{
a = n;
}

k = a;
z = 1;

while (k > 9)
{
k /= 10;
z *=  10;
}

for (; z >= 1; z /= 10)
{
_putchar(((a / z) % 10) + 48);
}
}
