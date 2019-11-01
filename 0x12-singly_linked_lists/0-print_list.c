#include "lists.h"
/**
 * print_list - function to print lists
 * @h: pointer of list
 * Return: retrn size_t
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
n++;
}
return (n);
}
