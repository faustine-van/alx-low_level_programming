#include "hash_tables.h"

/**
 * hash_table_print - print hash tables and node
 * @ht: hash tables
 * Return: nothing if ht is empty.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentNode;
	int print = 0;

	if (!ht || ht->size == 0)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];

		while (currentNode)
		{
			if (print) /* Skip last node */
				printf(", ");

			printf("'%s': '%s'", currentNode->key, currentNode->value);
			print = 1;

			currentNode = currentNode->next;
		}
	}
	printf("}\n");
}

