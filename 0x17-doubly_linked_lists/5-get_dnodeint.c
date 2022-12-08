#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: variable pointer
 * @index: index of the node, starting from 0
 * Return: nth node, NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		if (x == index)
			return (i);
		x++;
	}

	return (NULL);
}
