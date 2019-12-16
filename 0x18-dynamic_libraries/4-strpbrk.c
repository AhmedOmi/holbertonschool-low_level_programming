#include"holberton.h"
/**
 * _strpbrk - function
 * @s: char pointer
 * @accept: Char pointer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
int a = 0;
int b = 0;
while (*(s + a) != '\0')
{
while (*(accept + b) != '\0')
{
if (s[a] == accept[b])
{
return (s + b);
}
b++;
}
b = 0;
a++;
}
return (0);
}
