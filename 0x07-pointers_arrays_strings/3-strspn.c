#include"holberton.h"
#include<stdio.h>
/**
 * _strspn - function
 * @s: char pointer
 * @accept: Char pointer
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int x = 0;
while (*(s + i) != '\0')
{
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
{
x++;
break;
}
j++;
}
if (accept[j] == '\0')
{
break;
}
j = 0;
i++;
}
return (x);
}
