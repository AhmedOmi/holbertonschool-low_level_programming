 #include "lists.h"
/**
 * get_dnodeint_at_index - get  a nade from
 * @h: pointer to pointer head
 * @i: index to return
 * Return: lisr
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int i)
{
unsigned int count = 0;
while (h)
{
if (count == i)
return (h);
h = h->next;
count++;
}
return (NULL);
}
