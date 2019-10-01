#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverser string
 * @s: char pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
for (; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
