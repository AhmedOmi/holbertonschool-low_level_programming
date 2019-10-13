#include"holberton.h"
#include<stdio.h>
/**
 * _strlen - function to find the length of char or array
 * @array: pointer of char
 * Return: integer
 */
int _strlen(char *array)
{
int a = 0;

while (*(array + a) != '\0')
a++;
return (a);
}
/**
 *_strcmp - function compare
 * @ch: char pointer
 * @sh: char pointer
 * Return: return int
 */
int _strcmp(char *ch, char *sh)
{
int a = 0;
int b = 0;
while (ch[a] != '\0' && sh[a] != '\0')
{
if (ch[a] > sh[a])
return (ch[a] - sh[a]);
else if (ch[a] < sh[a])
return (-1 * (sh[a] - ch[a]));
a++;
}
return (b);
}
/**
 * _strncpy - function
 * @a: pointer  char
 * @b: pointer char
 * @n: integer
 * Return: char
 */
char *_strncpy(char *a, char *b, int n)
{
int i;

for (i = 0; i < n && b[i] != '\0'; i++)
{
a[i] = b[i];
}
for ( ; i < n; i++)
{
a[i] = '\0';
}
return (a);
}
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
