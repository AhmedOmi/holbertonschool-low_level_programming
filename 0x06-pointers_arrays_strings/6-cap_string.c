#include"holberton.h"
#include<stdio.h>
/**
 * cap_string - function of st
 * @a: pointer of char
 * Return: char a pointer
 */
char *cap_string(char *a)
{
int i = 0;
int j = 0;
const int ASCII_DIF = 32;
char separateur[] = {' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}'};
if (a[0] >= 'a' && a[0] <= 'z')
a[0] = a[0] - ASCII_DIF;
while (a[i] != '\0')
{
for (j = 0; separateur[j] != '\0'; j++)
{
if (a[i - 1] == separateur[j])
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] = a[i] - ASCII_DIF;
}
}
i++;
}
return (a);
}
