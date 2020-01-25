#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function to print hash_table
 * @ht: pointer of hash_table_t struct
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    if (ht == NULL)
    return ;
    for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{   printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
}