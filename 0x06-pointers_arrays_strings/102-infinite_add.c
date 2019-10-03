#include "holberton.h"
#include <stdio.h>
/**
* infinite_add - function to add
* @n1: char
* @n2: char
* @r: char.
* @size_r: int
* Return: char
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, s = 0, b, d, x, z;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i >= j)
d = i;
else
d = j;
if (size_r <= d + 1)
return (0);
r[d + 1] = '\0';
i--, j--, size_r--, x = n1[i] - 48, z = n2[j] - 48;
while (d >= 0)
{
b = x + z + s;
if (b >= 10)
s = b / 10;
else
s = 0;
if (b > 0)
r[d] = (b % 10) + 48;
else
r[d] = '0';
if (i > 0)
i--, x = n1[i] - 48;
else
x = 0;
if (j > 0)
{
j--;
z = n2[j] - 48;
}
else
z = 0;
d--;
size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
