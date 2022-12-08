#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: variable pointer
 * @idx: index of the list where the new node should be added
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *i, *currentNode, *sigNode;
	dlistint_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	for (i = *h; i != NULL; i = i->next)
	{
		if (x == idx)
		{
			currentNode = i->prev;
			sigNode = currentNode->next;
			currentNode->next = newNode;
			newNode->prev = currentNode;
			newNode->next = sigNode;
			sigNode->prev = newNode;
			return (newNode);
		}
		x++;
	}
	return (NULL);
}
