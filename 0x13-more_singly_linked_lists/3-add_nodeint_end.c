#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function add new node
 * @head: pointer of pointer struct
 * @n: const integer variable
 * Return: return the new node in the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp = NULL;
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node)
{
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
tmp = *head;
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new_node;
}
}
return (new_node);
}
