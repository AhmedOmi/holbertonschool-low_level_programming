#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function
 * @min: integer
 * @max: integer
 * Return: int
 */
int *array_range(int min, int max)
{
int *i, j;
if (min > max)
return (NULL);
j = max - min + 1;
i = malloc(sizeof(*i) * j);
if (!i)
return (NULL);
while (j--)
i[j] = max--;
return (i);
}
