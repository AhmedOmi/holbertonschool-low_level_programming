#include "lists.h"
/**
 * sum_dlistint - calclate the sum of lists
 * @head: pointer to pointer of head
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
