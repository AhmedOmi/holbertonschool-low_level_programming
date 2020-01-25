#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - function to get from hash_table
 * @ht: pointer of hash_table_t struct
 * @key: pointer of const char
 * Return: char
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int i;
if (ht == NULL)
return (0);
if (key == NULL)
return (0);
i = key_index((const unsigned char *)key, ht->size);
node = ht->array[i];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
