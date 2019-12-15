#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node by index
 * @h: pointer to pointer of head
 * @i: the index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int i)
{
dlistint_t *node, *tmp;
if (!h)
return (-1);
node = *h;
if (!i)
{
if (!node)
return (-1);
*h = node->next;
if (*h)
(*h)->prev = NULL;
free(node);
return (1);
}
for (; node; node = node->next, i--)
{
if (i - 1 == 0)
{
tmp = node->next;
if (!tmp)
break;
node->next = tmp->next;
if (tmp->next)
tmp->next->prev = node;
free(tmp);
return (1);
}
}
return (-1);
}
