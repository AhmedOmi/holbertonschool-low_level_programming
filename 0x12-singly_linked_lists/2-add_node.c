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
unsigned int str_len;
list_t *new;

if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
for (str_len = 0; new->str[str_len]; str_len++)
;
new->len = str_len;
new->next = *head;
*head = new;
return (new);
}
