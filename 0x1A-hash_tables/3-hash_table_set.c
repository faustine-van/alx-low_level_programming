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

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->value);
		free(newNode);
		return (0);
	}
	newNode->next = NULL;

	/****check if the index is empty*******/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
	}
	else
	{
		currentNode = ht->array[index];
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
	return (1);
}
