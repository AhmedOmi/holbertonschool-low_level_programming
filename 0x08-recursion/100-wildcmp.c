#include"holberton.h"
#include<stdio.h>
/**
* wildcmp - function.
* @s1: char pointer.
* @s2: char pointer
* Return: int
*/
int wildcmp(char *s1, char *s2)
{
int a, b, x;
if (*s2 == '*' && s2[1] != '\0' && *s1 == '\0')
return (0);
else if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == *s2)
{
a = wildcmp(s1 + 1, s2 + 1);
return (a);
}
else if (*s2 == '*')
{
x = wildcmp(s1, s2 + 1);
b = wildcmp(s1 + 1, s2);
return (x || b);
}
return (0);
}
