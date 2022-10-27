#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head pointer
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp ; i++)
		{
			temp = temp->next;
		}
		if (!temp)
			return (NULL);
	}
	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
