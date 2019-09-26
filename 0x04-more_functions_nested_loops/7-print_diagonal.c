#include"holberton.h"
/**
 * print_diagonal - print digit
 * @n:number
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
_putchar('\n');

for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
if (j != i)
{
_putchar(' ');
}
else
{
_putchar('\\');
}

}
_putchar('\n');
}
}
