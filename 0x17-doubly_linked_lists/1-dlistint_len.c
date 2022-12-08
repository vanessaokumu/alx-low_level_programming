#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: variable pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t res = 0;
	const dlistint_t *i;

	for (i = h; i != NULL; i = i->next)
	{
		res++;
	}
	return (res);
}
