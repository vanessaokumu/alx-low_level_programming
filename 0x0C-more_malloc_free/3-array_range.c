#include "main.h"
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: newly created array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	ar = malloc((size + 1) * sizeof(int));
	i = 0;
	n = min;
	while (n <= max)
	{
		ar[i] = n;
		i++;
		n++;
	}
	return (ar);
}
