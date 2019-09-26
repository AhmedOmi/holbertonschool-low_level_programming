#include <stdio.h>

/**
 * main - prints the largest prime factor of number 612852475143
 *
 * Return: 0;
 */
int main(void)
{
long int i = 612852475143;
int c = 2;
while (c * c < i)
{
while (i % c == 0)
i = i / c;
c = c + 1;
}
printf("%ld\n", i);
return (0);
}
