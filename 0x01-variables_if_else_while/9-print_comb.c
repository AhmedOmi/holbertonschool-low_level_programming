#include <stdio.h>
/**
 * main - 9
 * Ahmed omar miladi
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i >= '0' && i <= '8')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
