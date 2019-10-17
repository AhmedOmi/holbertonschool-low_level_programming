#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function of nconcat
 * @s1: pointer char
 * @s2: pointer char
 * @n: unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s = NULL;
unsigned int i = 0, j = 0;
if (s1)
while (s1[i])
i++;
if (s2)
while (s2[j])
j++;
if (n < j)
j = n;
else
n = j;
s = (char *)malloc(sizeof(char) * (1 + i + j));
if (s)
{
if (s1)
for (i = 0; s1[i]; i++)
s[i] = s1[i];
if (s2)
for (j = 0; j < n; j)
*(s + i + j) = s2[j];
*(s + i + j) = '\0';
}
return (s);
}
