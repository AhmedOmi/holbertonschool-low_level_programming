#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function to pint name
 * @name: pointer of char
 * @f: pointer of function
 * Return: return void
 */
void print_name(char *name, void (*f)(char *))
{
if ((*name) != '\0' && (*f) != NULL)
f(name);
}
