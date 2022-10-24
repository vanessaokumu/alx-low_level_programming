#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at beginning of  list_t list
 * @head: of a list_t list
 * @str: value to insert into element
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
