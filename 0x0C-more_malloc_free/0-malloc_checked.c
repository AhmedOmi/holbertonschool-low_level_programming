#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function pointer
 * @b: unsigned int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
