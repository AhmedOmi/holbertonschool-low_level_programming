#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - void function.
 * @a: pointer of integers
 * @n: pointer of integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int b;
if (n % 2 != 0)
b = n + 1;
else
b = n;
for (i = 0; i < b / 2; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
