#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 * sum_dlistint - that returns the sum of all the data (n) of a list
 * @head: variable pointer
 *
 * Return: the sum of all the data (n), 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *i;
	int sum = 0;

	for (i = head; i != NULL; i = i->next)
	{
		sum = sum + i->n;
	}
	return (sum);
}
