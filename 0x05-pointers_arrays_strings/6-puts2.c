#include "holberton.h"

/**
* puts2 - print a char
*@str: string to print
*Return: 0
*/

void puts2(char *str)
{
int tmp;
char s;
for (tmp = 0; str[tmp] != 0; tmp++)
{
if (tmp % 2 == 0)
{
s = str[tmp];
_putchar(s);
}
}
_putchar('\n');
}
