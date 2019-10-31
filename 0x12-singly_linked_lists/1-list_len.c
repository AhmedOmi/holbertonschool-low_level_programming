#include "lists.h"
/**
 * list_len - function to calcul length of list
 * @h: pointer list
 * Return: n size_t
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
