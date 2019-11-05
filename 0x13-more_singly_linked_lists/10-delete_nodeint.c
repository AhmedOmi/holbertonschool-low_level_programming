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
listint_t *temp;
listint_t *next;
unsigned int i;
temp = *head;
if (head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
for (i = 0; temp != NULL && i < index - 1; i++)
{
while (temp != NULL || temp->next != NULL)
{
next = temp->next->next;
temp->next = next;
free(temp->next);
index--;
}
}
return (1);
}
