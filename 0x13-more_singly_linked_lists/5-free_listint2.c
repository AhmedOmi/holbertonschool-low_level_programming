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
if (*head == NULL)
exit(1);
else
{
listint_t *tmp = *head;
*head = (*head)->next;
free(tmp);
*head = NULL;
}
}
