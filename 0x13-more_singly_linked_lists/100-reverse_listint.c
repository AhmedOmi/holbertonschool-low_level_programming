#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function to reverse list
 * @head: pointer of pointer struct
 * Return: return list
 */
listint_t *reverse_listint(listint_t **head)
{
if (*head == NULL)
return (NULL);
(*head)->next->next = *head;
(*head)->next = NULL;
return (*head);
}
