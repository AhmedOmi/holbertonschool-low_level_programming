#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function to free list
 * @head: pointer of pointer struct
 * Return: return free the list2
 */
void free_listint2(listint_t **head)
{
listint_t *temp = NULL;
if (head == NULL)
return;
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
