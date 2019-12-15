#include "lists.h"
/**
 * print length - print a len of list
 * @h: poiunter of dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}