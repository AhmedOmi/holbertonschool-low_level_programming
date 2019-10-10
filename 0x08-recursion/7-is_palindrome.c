#include"holberton.h"
#include<stdio.h>
/**
 * _strlen - length str
 * @str: pointer char
 * Return: int
 */
int _strlen(char *str)
{
int n;
if (*str == '\0')
return (0);
str++;
n = 1 + _strlen_recursion(str);
return (n);
}
/**
 * _palindrome - function
 * @i: intger
 * @l: integer
 * @p: pointer char
 * Return: void
 */
int _palindrome(int l, int i, char *p)
{
if (i > l / 2)
return (1);
else if (p[i] != p[l - i - 1])
return (0);
else
return (_palindrome(l, i + 1, p));
}
/**
 * is_palindrome - function
 * @s: pointer char
 * Return: int
 */
int is_palindrome(char *s)
{
int m;
int x;
m = _strlen(s);
x = _palindrome(m, 0, s);
return (x);
}
