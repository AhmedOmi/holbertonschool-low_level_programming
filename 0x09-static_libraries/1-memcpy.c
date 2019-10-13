#include "holberton.h"
#include<stdio.h>
/**
* _memcpy - function
* @dest: char pointer
* @src: char pointer
* @n: integer
* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
*(dest + a) = *(src + a);
return (dest);
}
