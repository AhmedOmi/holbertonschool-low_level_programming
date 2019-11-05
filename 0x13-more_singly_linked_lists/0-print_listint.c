#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function print a list
 * @h: pointer to struct listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
