#include "lists.h"
/**
* free_list - function to free lists
* @head: pointer of list_t
* Return: return void
*/
void free_list(list_t *head)
{
list_t *list;
while ((list = head) && (list != NULL))
{
head = head->next;
free(list->str);
free(list);
}
}
