#ifndef CALC
#define CALC
#include <stdlib.h>
#include <stdio.h>
/**
 * struct op - Structure
 * @op: pointer char
 * @f: pointer function of 2 integer
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
