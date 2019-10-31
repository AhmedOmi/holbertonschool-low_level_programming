#include <string.h>
#include "lists.h"
/**
 * add_node_end - function to add node in the end
 * @head: list
 * @str: variable pointer char
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nd, *tmp;
size_t n;
nd = malloc(sizeof(list_t));
if (nd == NULL)
return (NULL);
nd->str = strdup(str);
for (n = 0; str[n]; n++)
nd->len = n;
nd->next = NULL;
tmp = *head;
if (tmp == NULL)
*head = nd;
else
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = nd;
}
return (*head);
}
