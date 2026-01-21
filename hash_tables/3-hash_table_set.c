#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	char *v_copy;
	unsigned long int idx;

	if (!ht || !key || !*key || !value)
		return (0);

	v_copy = strdup(value);
	if (!v_copy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = v_copy;
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(v_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		free(v_copy);
		return (0);
	}
	new_node->value = v_copy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
