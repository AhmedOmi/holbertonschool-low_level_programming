#include "holberton.h"
#include <limits.h>
#include <stdlib.h>
/**
 * _calloc - function pointer
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
if (!nmemb || !size)
return (NULL);
s = malloc(nmemb * size);
if (!s)
return (NULL);
nmemb *= size;
while (nmemb--)
s[nmemb] = 0;
return (s);
}
