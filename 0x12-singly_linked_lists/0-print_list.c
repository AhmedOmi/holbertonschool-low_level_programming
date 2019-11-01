#include "lists.h"
#include <stdio.h>
/**
 * print_list - functio print list
 * @h: head pointer
 * Return: return size
 */
size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;

tmp = h;
for (i = 0; tmp; i++)
{
if (tmp->str)
printf("[%u] %s\n", tmp->len, tmp->str);
else
printf("[%u] %s\n", 0, "(nil)");

tmp = tmp->next;
}
return (i);
}
