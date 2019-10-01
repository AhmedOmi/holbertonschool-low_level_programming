#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - putch
 * @str: char pointer
 * Return: void
 */
void puts2(char *str)
{
int l = 0;
while (str[l] != '\0')
{
_putchar(str[l]);
l = l + 2;
}
_putchar('\n');
}
