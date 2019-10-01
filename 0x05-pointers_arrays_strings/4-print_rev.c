#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - pointeur in reverser
 * @s : ponter of char
 * return : void
 */
void print_rev(char *s)
{
int i;
int j;
while (s[i] != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
_putchar(s[j]);
_putchar('\n');
}
