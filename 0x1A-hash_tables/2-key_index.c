#include "hash_tables.h"

/**
 * key_index - give the index of key
 * @key: key
 * @size: size of array hash table
 * Return: index of key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashcode = hash_djb2(key);
	unsigned int index = hashcode % size;

	return (index);
}
