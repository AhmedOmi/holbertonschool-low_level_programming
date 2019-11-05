#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function to sum list
 * @head: pointer of pointer struct
 * Return: integer sum af all list
 */
int sum_listint(listint_t *head)
{
if (head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
else
return (0);
}
