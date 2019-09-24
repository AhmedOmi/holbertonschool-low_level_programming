#include "holberton.h"
/**
 *print_alphabet - print alfabet
 *
 *Return: 0
 */
void print_alphabet(void)
{
int conteur;
conteur = 'a';
while (conteur <= 'z')
{
_putchar(conteur);
conteur++;
}
_putchar('\n');
}
