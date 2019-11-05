#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function to get node int at index
 * @head: pointer of pointer struct
 * @index: integer
 * Return: return list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int count = 0;
while (temp != NULL)
{
if (count == index)
return (temp->next);
count++;
temp = temp->next;
}
return (temp);
}
