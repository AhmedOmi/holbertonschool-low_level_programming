#include "holberton.h"
/**
 * _atoi - converse from char to int
 * @s: string to convert
 * Return: numbre
 */
int _atoi(char *s)
{
int count1, count2, i;
count2 = 1;
i = count1 = 0;
while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
{
if (s[i] == '-')
count2 = count2 * -1;
i++;
}
while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
{
if (count1 >= 0)
{
count1 = count1 * 10 - (s[i] - '0');
i++;
}
else
{
count1 = count1 * 10 - (s[i] - '0');
i++;
}
}
count2 = count2 * -1;
return (count1 *count2);
}
