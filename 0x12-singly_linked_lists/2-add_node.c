#include "lists.h"
#include <string.h>
/**
 * add_node - list to add new node
 * @head: variable de type list_t
 * @str: pointer const char
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *h;
size_t n;
h = malloc(sizeof(list_t));
if (h == NULL)
return (NULL);
h->str = strdup(str);
for (n = 0; str[n]; n++)
h->len = n;
h->next = *head;
*head = h;
return (*head);
}
