#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - function print a list
 * @h: pointer to struct listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
const listint_t *tmp;
tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
i++;
}
return (i);
}
