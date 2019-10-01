#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverser string
 * @s: char pointer
 * Return: Always 0
 */
void rev_string(char *s)
{
int i = 0;
int length = 0;
char a;
while (s[length] != '\0')
length = length + 1;
for (i = 0; i < length / 2; i++)
{
a = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = a;
}
}
