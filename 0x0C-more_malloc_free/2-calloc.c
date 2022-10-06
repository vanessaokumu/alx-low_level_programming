#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of element in array
 * @size: byte for each position
 * Return: pointer to allocated memory
 */
void *_calloc9unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
