#include "holberton.h"
#include <stdio.h>
/**
* rot13 - function
* @a: pointer char
* Return: return char
*/
char *rot13(char *a)
{
int b = 0;
int x = 0;
int n = 0;
char c[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char z[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
int i;
int j;
while (a[x] != '\0')
x++;
while (c[j] != '\0')
b++;
for (i = 0; i < x; i++)
{
for (j = 0; j < b; j++)
{
if (a[i] == c[j])
{
a[i] = z[j];
n = 1;
}
}
n = 0;
}
return (a);
}
