#include "holberton.h"
/**
 * _strlen - length of string
 * @str: string 
 * Return: length of string
 */
int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}
/**
 * create_file - function to create a file
 * @filename: pointer char contain the name of file
 * @text_content: pointer char
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
int f;
ssize_t b, i = _strlen(text_content);
if (!filename)
return (-1);
f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);
if (i)
b = write(f, text_content, i);
close(f);
return (b == i ? 1 : -1);
}
