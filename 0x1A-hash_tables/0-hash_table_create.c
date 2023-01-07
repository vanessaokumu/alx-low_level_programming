#include "hash_tables.h"

/**
 * hash_table_create - create table hash
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_aux = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	table_aux = malloc(sizeof(hash_table_t));

	if (table_aux == NULL)
	{
		return (NULL);
	}

	table_aux->size = size;

	table_aux->array = malloc(sizeof(hash_node_t *) * size);

	if (table_aux->array == NULL)
	{
		return (NULL);
	}
	return (table_aux);
}
