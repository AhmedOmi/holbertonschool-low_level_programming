#include "holberton.h"

/**
 * read_textfile - function to read text from file
 * @filename: pointer char contain the name of file
 * @letters: pointer size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int a;
ssize_t b;
char buffer[BUFFER_SIZE * 8];
if (!filename || !letters)
return (0);
a = open(filename, O_RDONLY);
if (a == -1)
return (0);
b = read(a, &buffer[0], letters);
b = write(STDOUT_FILENO, &buffer[0], b);
close(a);
return (b);
}
