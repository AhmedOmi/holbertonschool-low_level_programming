#include <stdio.h>
#include "holberton.h"
/**
* print_most_numbers - print
*
* Return: void
*/
void print_most_numbers(void)
{
int  i;

for (i = 0 ; i <= 9 ; i++)
{

if (i != 4 && i != 2)
_putchar(i + '0');
}
_putchar('\n');
}
