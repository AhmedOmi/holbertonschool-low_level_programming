#include <stdio.h>
/**
 * main - 1 - last digit
 * Ahmed omar miladi
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'a'; i < 'z'; i++)
if (i != 'e' && i != 'q')
putchar(i);
putchar('\n');
return (0);
}
