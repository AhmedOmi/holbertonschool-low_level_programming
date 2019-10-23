#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function
 * @array: pointer int
 * @size: int
 * @cmp: function to comapare
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && size && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
