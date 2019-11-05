#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function add new node
 * @head: pointer of pointer struct
 * @n: const integer variable
 * Return: return the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
exit(0);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
