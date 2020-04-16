#include "search_algos.h"

/**
 * binary_search - function binary search
 * @array: pointer of array
 * @size: size-t
 * @value: int value for search
 * Return: retrun int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *tab = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", tab[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (tab[i] == value)
			return ((tab - array) + i);
		else if (tab[i] > value)
			size = i;
		else
		{
			tab += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}
