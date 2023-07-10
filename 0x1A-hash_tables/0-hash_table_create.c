#include "hash_tables.h"

/**
 * hash_table_create - create hash tables
 * @size: size of the array
 * Return: newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int a;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t));
	if (!new_table->array)
		return (NULL);
	for (a = 0; a < new_table->size; a++)
	{
		new_table->array[a] = NULL;
	}

	return (new_table);
}
