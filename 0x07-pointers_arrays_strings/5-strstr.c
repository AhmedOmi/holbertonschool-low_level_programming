#include"holberton.h"
#include<stdio.h>
/**
* _strstr - function .
* @haystack: pointer of char
* @needle: pointer of char
* Return: return char
*/
int _strlen(char *arr);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);

char *_strstr(char *haystack, char *needle)
{
char buffer[512];
int i = 0;
int haystack_len = _strlen(haystack);
int needle_len = _strlen(needle);

while (i <= haystack_len - needle_len)
{
_strncpy(buffer, haystack + i, needle_len);
buffer[needle_len] = 0;

if (_strcmp(buffer, needle) == 0)
{
return (haystack + i);
}
i++;
}

return (0);
}
