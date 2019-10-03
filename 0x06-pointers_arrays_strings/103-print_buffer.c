#include "holberton.h"
#include <stdio.h>

/**
* print_buffer - function of buffer printer
* @b: char
* @size: int
* Return: void
*/
void print_buffer(char *b, int size)
{
int i, j, x;
if (size <= 0)
printf("\n");
else
{
for (i = 0; i < size; i += 10)
{
printf("%.8x:", i);
for (j = i; j < i + 10; j++)
{
if (j % 2 == 0)
printf(" ");
if (j < size)
printf("%.2x", b[j]);
else
printf("  ");
}
printf(" ");
for (x = i; x < i + 10; x++)
{
if (x >= size)
break;
if (b[x] < 32 || b[x] > 126)
printf("%c", '.');
else
printf("%c", b[x]);
}
printf("\n");
}
}
}
