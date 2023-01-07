#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_table;
	unsigned int idx = 0;
	unsigned int aux = 0;

	if (ht == NULL)
	{
		return;
	}

	node_table = ht->array[0];
	putchar('{');

	for (idx = 0; idx < ht->size; idx++)
	{
		node_table = ht->array[idx];
		while (node_table)
		{
			if (aux == 1)
				printf("'%s': '%s'", node_table->key, node_table->value);
			aux = 1;
			node_table = node_table->next;
		}
	}
	putchar('}');
	putchar('\n');
}
