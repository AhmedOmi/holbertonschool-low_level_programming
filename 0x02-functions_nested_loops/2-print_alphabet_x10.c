#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet 10x
 *
 *Return: 0;
 */
void print_alphabet_x10(void)
{
int alpha, count;
alpha = 'a';
for (count = 0; count < 10; count++)
{
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
alpha = 'a';
}
}
