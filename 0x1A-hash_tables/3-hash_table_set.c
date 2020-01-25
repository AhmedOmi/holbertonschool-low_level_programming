#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * new_node - allocates a new node
 * @key: pointer of string
 * @value: pointer of value
 * Return: hash_node_t
 */
hash_node_t *new_node(const char *key, const char *value)
{
hash_node_t *N_node;
N_node = malloc(sizeof(hash_node_t));
if (N_node == NULL)
return (0);
N_node->key = strdup(key);
if (N_node->key == NULL)
{
free(N_node);
return (0);
}
N_node->value = strdup(value);
if (N_node->value == NULL)
{
free(N_node->key);
free(N_node);
return (0);
}
return (N_node);
}

/**
 * hash_table_set - function to set hash_table
 * @ht: pointer of hash_table_t struct
 * @key: pointer of const char
 * @value: pointer of const char
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node = NULL;
hash_node_t *head;
unsigned long int i;
if (ht == NULL || key == NULL || value == NULL)
return (0);
i = key_index((const unsigned char *)key, ht->size);
head = ht->array[i];
while (head)
{
if (!strcmp(key, head->key))
{
char *N_value = strdup(value);
if (!N_value)
return (0);
free(head->value);
head->value = N_value;
return (1);
}
head = head->next;
}
node = new_node(key, value);
if (node == NULL)
return (0);
node->next = ht->array[i];
ht->array[i] = node;
return (1);
}
