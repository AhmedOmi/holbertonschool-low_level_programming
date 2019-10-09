#include"holberton.h"
#include<stdio.h>
/**
 * _puts_recursion - function puts recursion
 * @s: pointer char
 * Return: void.
 */
void _puts_recursion(char *s)
{
int i = 1;
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + i);

}

}
