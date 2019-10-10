#include"holberton.h"
#include<stdio.h>
/**
* _pow_recursion - function recursion of pow.
* @x: integer.
* @y: integer.
* Return: int.
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
else
return (x * _pow_recursion(x, y - 1));
}
