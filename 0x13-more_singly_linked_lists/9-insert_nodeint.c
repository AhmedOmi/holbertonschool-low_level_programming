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
return (temp);
count++;
temp = temp->next;
}
return (NULL);
}
/**
 * insert_nodeint_at_index - function to insert node int at index
 * @head: pointer of pointer struct
 * @idx: integer
 * @n: integer
 * Return: return list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *temp;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
temp = get_nodeint_at_index(*head, idx - 1);
if (temp == NULL)
{
free(new);
return (NULL);
}
new->next = temp->next;
temp->next = new;
return (new);
}
