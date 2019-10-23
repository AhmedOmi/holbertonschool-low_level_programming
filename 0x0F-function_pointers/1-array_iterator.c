#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function array iterator
 * @array: pointer  int
 * @size: size_t new type
 * @action: function pointer
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size - 1;
if (array && size && action)
while (array <= end)
action(*array++);
}
