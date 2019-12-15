#include "lists.h"
/**
 * free_dlistint - free to list
 * @h: pointer to pointer of head
 * Return: void
 */
void free_dlistint(dlistint_t *h)
{
dlistint_t *n;
while (h)
{
n = h;
h = h->next;
free(n);
}
}
