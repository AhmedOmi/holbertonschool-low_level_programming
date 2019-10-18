#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - function
 * @ptr: void
 * @old_size: int
 * @new_size: int
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *s;
if (!ptr)
return (malloc(new_size));
if (!new_size)
return (free(ptr), NULL);
if (new_size == old_size)
return (ptr);
s = malloc(new_size);
if (!s)
return (NULL);
old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
s[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (s);
}
