#include"holberton.h"
#include<stdio.h>

/**
* _strstr - function .
* @haystack: pointer of char
* @needle: pointer of char
* Return: return char
*/

char *_strstr(char *haystack, char *needle)
{
char a[512];
int i = 0;
int len1 = _strlen(haystack);
int len2 = _strlen(needle);
while (i <= len1 - len2)
{
_strncpy(a, haystack + i, len2);
a[len2] = 0;

if (_strcmp(a, needle) == 0)
{
return (haystack + i);
}
i++;
}
return (0);
}
