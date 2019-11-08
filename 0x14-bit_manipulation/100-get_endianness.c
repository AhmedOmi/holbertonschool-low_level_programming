#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_endianness - function to get an endianness
 * Return: void
 */
int get_endianness(void)
{
unsigned long int n = 1;
return (*(char *)&n);
}

