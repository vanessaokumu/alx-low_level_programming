#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 *
 * Return: sum of all data, 0 if the list is empty
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
