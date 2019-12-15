#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node by index
 * @h: pointer to pointer of header
 * @i: int index
 * @n: the int value of head
 * Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int i, int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *node;
if (!h || !new)
return (new ? free(new), NULL : NULL);
node = *h;
new->n = n;
if (!i)
{
new->prev = NULL;
new->next = node ? node : NULL;
if (node)
node->prev = new;
return (*h = new);
}
for (; node; node = node->next, i--)
{
if (i - 1 == 0)
{
new->prev = node;
new->next = node->next;
if (new->next)
new->next->prev = new;
node->next = new;
return (new);
}
}
return (free(new), NULL);
}
