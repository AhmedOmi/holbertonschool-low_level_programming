#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @h: pointer to pointer of head
 * @n: int
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *node;
if (!h || !new)
return (new ? free(new), NULL : NULL);
new->n = n;
new->next = NULL;
if (!*h)
{
new->prev = NULL;
*h = new;
}
else
{
node = *h;
while (node->next)
node = node->next;
node->next = new;
new->prev = node;
}
return (new);
}
