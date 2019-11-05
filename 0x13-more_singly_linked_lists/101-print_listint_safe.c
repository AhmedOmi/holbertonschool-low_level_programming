#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function to return lengh of list
 * @h: pointer to struct listint_t
 * Return: the length of structure
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}

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
/**
 * print_listint_safe - function to print list
 * @head: pointer of pointer struct
 * Return: return size
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i, p, x;
i = listint_len(head)
return (i);
for (x = 0; x < i; x++)
{
p = print_listint(head);
}
return (p);
}
