#include"holberton.h"
#include<stdio.h>
/**
 * _print_rev_recursion - function print reverse recursion.
 * @s: pointer of char
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
int i = 1;
if (*s != '\0')
{
_print_rev_recursion(s + i);
_putchar(*s);
}
}
