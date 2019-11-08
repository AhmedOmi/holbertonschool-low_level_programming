#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * longueur_chaine_rec - convert binary number.
 * @sh: pointer char
 * Return: unsigned integer.
 */
unsigned int longueur_chaine_rec(const char *sh)
{
unsigned int length = 0;
while (sh[length] != '\0')
length++;
return (length);
}
/**
 * binary_to_uint - convert binary number.
 * @b: pointer char
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
unsigned int res = 0;
unsigned int length = longueur_chaine_rec(b);
length--;
if (b == NULL)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
res += 1 << length;
length--;
}
return (res);
}
