#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_djb2 - function djb2
 * @str: const unsigned char
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
unsigned long int c;
hash = 5381;
while ((c = *str++))
hash = ((hash << 5) + hash) +c;
return (hash);
}
