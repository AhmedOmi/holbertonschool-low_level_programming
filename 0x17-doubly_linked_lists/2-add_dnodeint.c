#include "lists.h"
/**
 * add_dnodeint - function to add node
 * @h: pointer of pointer a head
 * @n: int of new node
 * Return: List
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (!h || !new)
return (new ? free(new), NULL : NULL);
new->n = n;
new->prev = NULL;
if (!*h)
{
*h = new;
new->next = NULL;
}
else
{
new->next = *h;
(*h)->prev = new;
*h = new;
}
return (new);
}
