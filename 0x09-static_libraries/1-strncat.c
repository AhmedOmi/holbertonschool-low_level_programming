#include"holberton.h"
/**
 * _strncat - concatinates two strings
 * @dest: pointer of char
 * @src: pointer of char
 * @n:  integer
 * Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int count;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
for (count = 0; count < n; count++)
dest[i + count] = src[count];
j++;
}
return (dest);
}
