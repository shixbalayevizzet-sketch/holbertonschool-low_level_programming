#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array.
 * @key: The key to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 * Description: Uses the djb2 algorithm to calculate the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}
