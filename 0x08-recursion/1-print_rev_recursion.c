#include"holberton.h"
#include<stdio.h>
/**
 * _print_rev_recursion - function print reverse recursion.
 * *s: char pointer
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
_putchar('\n');
}
while (s[i] != '\0')
i++;
_putchar(s[i]);
i--;
_print_rev_recursion(*s);
}
