#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function to delet node to index
 * @head: pointer of pointer struct
 * @index: integer
 * Return: return int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
if (*head == NULL)
return (0);
listint_t *temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (index);
}
for (i = 0; temp != NULL && i < index - 1; i++)
{
temp = temp->next;

if (temp == NULL || temp->next == NULL)
{
return (index);
}
}
listint_t *next = temp->next->next;
free(temp->next);
temp->next = next;
return (0);
}
