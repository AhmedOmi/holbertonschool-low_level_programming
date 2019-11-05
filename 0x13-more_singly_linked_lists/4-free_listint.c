#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function add new node
 * @head: pointer of pointer struct
 * @n: const integer variable
 * Return: return the new node in the end
 */
void free_listint(listint_t *head)
{
    free(head);  
}