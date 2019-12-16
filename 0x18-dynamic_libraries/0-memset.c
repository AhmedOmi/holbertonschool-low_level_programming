#include"holberton.h"

/**
 * _memset - function
 * @s: char pointer
 * @b: char pointer
 * @n: unsigned integer number
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
*(s + a) = b;
}

return (s);
}
