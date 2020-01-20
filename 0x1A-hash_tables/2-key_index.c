#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - function djb2
 * @key: pointer of unsigned char
 * @size: unsigned long int
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int k;
if (size == 0)
return (0);
k = hash_djb2(key) % size;
return (k);
}
