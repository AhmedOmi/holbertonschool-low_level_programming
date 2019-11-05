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
int x = 0;
listint_t *temp = NULL;
if (*head != NULL)
{
temp = (*head)->next;
x =  (*head)->n;
free(*head);
*head = temp;
}
return (x);
}
