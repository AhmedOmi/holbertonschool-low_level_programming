#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 * @size: unsigned long int
 * Return: return a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *tab;
tab = malloc(sizeof(hash_table_t));
if (tab == NULL)
return NULL;
tab->size = size;
tab->array = malloc(sizeof(hash_node_t));
return (tab);
}
