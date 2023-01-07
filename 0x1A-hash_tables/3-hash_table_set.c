#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add/update
 * @key: the key
 * @value: value associated with key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp_node, *new_node;
	unsigned long int idx;

	if (!ht || !value || strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[idx];
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			if (tmp_node->value)
				free(tmp_node->value);
			tmp_node->value = strdup(value);
			if (!tmp_node->value)
				return (0);
			return (1);
		}
		tmp_node = tmp_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
