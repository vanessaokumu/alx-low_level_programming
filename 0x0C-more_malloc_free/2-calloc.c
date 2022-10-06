#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: maximum bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of element in array
 * @size: byte for each position in array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == 0)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}
