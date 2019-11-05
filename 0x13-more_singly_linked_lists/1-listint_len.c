#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
