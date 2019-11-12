#include "holberton.h"
/**
 * main - a programme to copy
 * @argc: integer number of arguments
 * @argv: array of strings containing the arguments
 * Return: int
 */
int main(int argc, char **argv)
{
int f[2] = {0, 0}, c = 0;
ssize_t a = 0, b = 0;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, ERR97);
exit(97);
}
f[0] = open(argv[1], O_RDONLY);
if (f[0] == -1)
{
dprintf(STDERR_FILENO, ERR98, argv[1]);
exit(98);
}
f[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (f[1] == -1)
{
dprintf(STDERR_FILENO, ERR99, argv[2]);
exit(99);
}
do {
a = read(f[0], buffer, BUFFER_SIZE);
if (a == -1)
{
dprintf(STDERR_FILENO, ERR98, argv[1]);
exit(98);
}
if (a)
{
b = write(f[1], buffer, a);
if (b != a)
{
dprintf(STDERR_FILENO, ERR99, argv[2]);
exit(99);
}
}
} while (a);
c = close(f[0]);
if (c == -1)
{
dprintf(STDERR_FILENO, ERR100, f[0]);
exit(100);
}
c = close(f[1]);
if (c == -1)
{
dprintf(STDERR_FILENO, ERR100, f[1]);
exit(100);
}
return (0);
}
