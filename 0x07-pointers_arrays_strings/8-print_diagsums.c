#include"holberton.h"
#include<stdio.h>
/**
* print_diagsums - function print
* @a: int pointer
* @size: intefer
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i, j;
int max = size - 1;
int quad = size * size;
int acc_diag1 = 0;
int acc_diag2 = 0;
for (i = 0; i < quad; i += (size + 1))
{
acc_diag1 += a[i];
}
for (j = max; j < (quad - max); j += max)
{
acc_diag2 += a[j];
}

printf("%d, %d\n", acc_diag1, acc_diag2);
}
