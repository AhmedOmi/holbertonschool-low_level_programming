#include "holberton.h"

/**
 * clear_bit - function to clear bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
return (-1);
*n &= ~(1 << index);
return (1);
}
