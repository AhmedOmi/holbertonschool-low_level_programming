#include "holberton.h"
#include <stdio.h>
/**
 * _puts - function to put
 * @str : caractere pointer
 * Return: void
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar (str[i]);
i++;
}
_putchar ('\n');
}
