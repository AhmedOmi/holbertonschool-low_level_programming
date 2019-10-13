#include<stdlib.h>
#include<stdio.h>
/**
 * main - function
 * @argc: integer
 * @argv: char pointer
 * Return: int 0 or 1
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
puts("Erreur");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
