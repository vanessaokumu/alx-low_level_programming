#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod;

	if (head == NULL)
		return (NULL);
	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->next = *head;
	*head = nod;
	return (nod);
}
