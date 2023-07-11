#include "hash_tables.h"

/**
 * shash_table_create - create new table for sorted linked list
 * @size: size of array tables
 * Return: new table created.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int a;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_table_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		new_table->array[a] = NULL;
		new_table->shead = NULL;
		new_table->stail = NULL;
	}

	return (new_table);
}

/**
 * shash_table_set - add element to the tables
 * @ht: hash table
 * @key: is the key
 * @value: value associated to the key
 * Return: Always return 1 for SUCCESS or 0 for FAILURE.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	unsigned long int index;

	if (!ht || !value || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->snext = NULL;
	new_node->sprev = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}

		current_node->snext = new_node;
		new_node->sprev = current_node;
		ht->stail = new_node;
	}
	return (1);
}

/**
 * shash_table_get - add element to the tables
 * @ht: hash table
 * @key: is the key
 * Return: Always return 1 for SUCCESS or 0 for FAILURE.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print hash tables and node
 * @ht: hash tables
 * Return: nothing if ht is empty.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *currentNode;
	int print = 0;

	if (!ht || ht->size == 0)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];

		while (currentNode != NULL)
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
/**
 * shash_table_print_rev - print hash tables and node in reverse order
 * @ht: hash tables
 * Return: nothing if ht is empty.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *currentNode;
	int print = 0;

	if (!ht || ht->size == 0)
		return;

	printf("{");

	for (i = ht->size - 1; i > 0; i--)
	{
		currentNode = ht->array[i];
		while (currentNode != NULL)
		{
			if (print) /* Skip last node */
				printf(", ");
			printf("'%s': '%s'", currentNode->key, currentNode->value);
			print = 1;
			currentNode = currentNode->sprev;
		}
	}

	printf("}\n");
}

/**
 * shash_table_delete - delete element from hash tables
 * @ht: hash tables
 * Return: nothing if ht is empty.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int a;
	shash_node_t *current_node, *tempNode;

	if (ht == NULL)
		return;
	for (a = 0; a < ht->size; a++)
	{
		current_node = ht->array[a];
		while (current_node != NULL)
		{
			tempNode = current_node;
			current_node = current_node->snext;
			free(tempNode->key);
			free(tempNode->value);
			free(tempNode);

		}
	}
	free(ht->array);
	free(ht);
}
