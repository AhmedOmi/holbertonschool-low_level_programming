#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * flip_bits - return a bit with flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip;
unsigned long int i;
flip = n ^ m;
i = 0;
for (; flip; flip >>= 1)
i += flip & 1;
return (i);
}
