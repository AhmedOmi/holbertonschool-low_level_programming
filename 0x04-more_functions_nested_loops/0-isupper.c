#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - function of validate
 * @c: takes in an integer
 * Return: returns output
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
