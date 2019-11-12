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
 * append_text_to_file - function appent a text in to file
 * @filename: pointer char contain the name of file
 * @text_content: pointer char
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int a;
ssize_t b = 0, i = _strlen(text_content);
if (!filename)
return (-1);
a = open(filename, O_WRONLY | O_APPEND);
if (a == -1)
return (-1);
if (i)
b = write(a, text_content, i);
close(a);
return (b == i ? 1 : -1);
}
