#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - function to get_bit
 * @n: unsigned long int
 * @index: unsigned int index
 * Return: Return int
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return ((n >> index) & 1);
}
