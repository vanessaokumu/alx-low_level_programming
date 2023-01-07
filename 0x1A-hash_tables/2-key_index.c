#include "hash_tables.h"

/**
 * key_index - gives the index of the key
 * @key: the key
 * @size: size of array of the hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
