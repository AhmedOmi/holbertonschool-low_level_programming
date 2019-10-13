#include"holberton.h"
#include<stdio.h>
/**
 * _strncpy - copier to char
 * @src: pointer of char
 * @dest: pointer of char
 * @n: integer
 * Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
