#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function to delet head list
 * @head: pointer of pointer struct
 * Return: return head nodes data
 */
int pop_listint(listint_t **head)
{
listint_t *temp = NULL;
if (head == NULL)
return (0);
temp = *head;
*head = (*head)->next;
free(temp);
return (0);
}
