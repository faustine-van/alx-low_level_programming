#include "hash_tables.h"

/**
 * hash_table_delete - delete node
 * @ht: hash table
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentNode, *tempNode;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];
		while (currentNode)
		{
			tempNode = currentNode;
			currentNode = currentNode->next;
			free(tempNode->key);
			free(tempNode->value);
			free(tempNode);
		}
	}
	free(ht->array);
	free(ht);
}
