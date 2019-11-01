#include "lists.h"
/**
 * print_list - function to print list
 * @h: pointer  of list
 * Return: return size_t
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
