#include"holberton.h"
#include<stdio.h>
/**
 * _strlen_recursion - function print reverse recursion.
 * @s: pointer of char
 * Return: int
 */
int _strlen_recursion(char *s)
{
int n;
if (*s == '\0')
return (0);
s++;
n = 1 + _strlen_recursion(s);
return (n);
}
