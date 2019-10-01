#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - function to swipe to variable
 * @a: a integer
 * @b: b integer
 * return : void
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
