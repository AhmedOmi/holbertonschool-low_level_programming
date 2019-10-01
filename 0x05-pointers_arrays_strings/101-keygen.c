#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  101keygen
 *
 * Return:  0
 */
int main(void)
{
 int count, count2, i;
 char array[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
 char pwd[100];
srand(time(NULL));
 i = 0;
 count = 0;
while (i < (2772 - 122))
{
	count2 = rand() % 62;
	pwd[count] = array[count2];
	i = i + pwd[count];
	count++;
}
 count2 = 2772 - i;
 pwd[count] = count2;
 count++;
 pwd[count] = '\0';
 printf("%s", pwd);
putchar('\n');
return (0);
}
