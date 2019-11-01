#include "lists.h"
/**
 * _strlen - function to return length of string
 * @s: char pointer
 * Return: integer 0 or i
 */
int _strlen(char *s)
{
int i = 0;
if (s == NULL)
return (0);
while (s[i] != '\0')
i++;
return (i);
}
/**
 * print_list - function to print list
 * @h: pointer  of list
 * Return: return size_t
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
i++;
}
return (i);
}

