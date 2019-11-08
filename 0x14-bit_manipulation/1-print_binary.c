#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - void to print binary
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
    if (n < 2)
    putchar(n +'0');
    while (n)
        {
        putchar ((n & 1) + '0');
        n = (n >> 1);
        }
}
