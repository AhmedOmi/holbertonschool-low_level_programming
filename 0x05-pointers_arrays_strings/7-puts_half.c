#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print half
 * @str : pointer char
 * Return : Always 0.
 */
void puts_half(char *str)
{
int count, z, length;
z = 0;
while (str[z] != '\0')
z++;
length = z;
z = z / 2;
if (length % 2 != 0)
{
z++;
}
for (count = 0; count < length; count++)
{
if (count >= z)
_putchar(str[count]);
}
_putchar('\n');

}
