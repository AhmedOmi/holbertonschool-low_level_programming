#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function to free list
 * @head: pointer of pointer struct
 * Return: return the new node in the end
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head;
head = head->next;
tmp->next = head;
}
free(head);
}
