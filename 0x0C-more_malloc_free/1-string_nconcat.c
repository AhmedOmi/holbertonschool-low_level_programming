#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - function of length
 * @s: char pointer
 * Return: return n
 */
int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
n++;
return (n);
}
/**
 * string_nconcat - function to concatinate
 * @s1: pointer char
 * @s2: pointer char
 * @n: unsigned integer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s, *a;
unsigned int i, j;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
i = _strlen(s1);
j = _strlen(s2);
if (j > n)
j = n;
else
n = j;
s = malloc(i + j + 1);
a = s;
if (!s)
return (NULL);
while (*s1)
*s++ = *s1++;
while (j--)
*s++ = *s2++;
*s = '\0';
return (a);
}
