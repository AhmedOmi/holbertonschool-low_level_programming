#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: pointer of hash_table_t struct
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long i = 0;
hash_node_t *node;
hash_node_t *tmp;
if (ht == NULL)
return;
while (i == ht->size)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node;
node = node->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
i++;
}
free(ht->array);
free(ht);
}
