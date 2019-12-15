#include "lists.h"
/**
 * dlistint_len - len of list
 * @h: poiunter of dlistint_t
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}