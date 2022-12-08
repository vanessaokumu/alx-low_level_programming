#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: variable pointer to pointer
 * @n: value
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *i = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (i->next != NULL)
	{
		i = i->next;
	}

	i->next = newNode;
	newNode->prev = i;

	return (newNode);
}
