#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: integer
 * @argv: char pointer
 * Return: int 0 or 1
 */
int main(int argc, char const *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
puts("Error");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
