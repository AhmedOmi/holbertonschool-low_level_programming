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
printf("[0] (nil)");
printf("[%d] %s\n", h->len, h->str);
h = h->next;
n++;
}
return (n);
}
