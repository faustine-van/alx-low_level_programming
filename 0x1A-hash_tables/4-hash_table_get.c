#include "hash_tables.h"

/**
 * hash_table_get - add element to the tables
 * @ht: hash table
 * @key: is the key
 * Return: Always return 1 for SUCCESS or 0 for FAILURE.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *currentNode;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
			return (currentNode->value);
		currentNode = currentNode->next;
	}

	return (NULL);
}
