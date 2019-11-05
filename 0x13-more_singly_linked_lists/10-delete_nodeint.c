#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function to delet node to index
 * @head: pointer of pointer struct
 * @index: integer
 * Return: return int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *temp = *head;
    if (*head == NULL)
    return (0);
    if (index == 0)
    {
        *head = temp->next;
        free(temp);
        return (index);
    }
    if (index != 0)
    {
        while (i == index)
        {
           *head = temp->next;
            free(temp);
            i++;
          
        }
       
    }
       return (i);
}