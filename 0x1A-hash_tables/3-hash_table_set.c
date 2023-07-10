#include "hash_tables.h"

/**
 * hash_table_set - add element to the tables
 * @ht: hash table
 * @key: is the key
 * @value: value associated to the key
 * Return: Always return 1 for SUCCESS or 0 for FAILURE.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *currentNode, *newNode;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	currentNode = ht->array[index];
	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			if (currentNode->value == NULL)
				return (0);
			return (1);
		}
		currentNode = currentNode->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	/****check if the index is empty*******/
	if (ht->array[index] == NULL)
		ht->array[index] = newNode;
	else
	{
		currentNode = ht->array[index];
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}
	return (1);
}
