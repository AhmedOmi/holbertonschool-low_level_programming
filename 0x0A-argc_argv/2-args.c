#include <stdio.h>
/**
 * main - function
 * @argc: integer
 * @argv: char pointer
 * Return: int 0
 */
int main(int argc, char const *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
