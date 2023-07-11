#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

typedef struct
{
	char *key;
	int value;
} KeyValuePair;

typedef struct Node
{
	KeyValuePair pair;
	struct Node *next;
} Node;

typedef struct
{
	Node *table[TABLE_SIZE];

} HashTable;

unsigned int hash(const char *str)
{
	unsigned int hash = 0;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return hash % TABLE_SIZE;

}

void initializeHashTable(HashTable *ht)
{
	for (int i = 0; i < TABLE_SIZE; i++)
		 ht->table[i] = NULL;
}
void insert(HashTable *ht, const char *key, int value)
{
	unsigned int index = hash(key);

	Node *newNode = malloc(sizeof(Node));
	KeyValuePair pair;
	pair.key = strdup(key);
	pair.value = value;
	newNode->pair = pair;
	newNode->next = NULL;

	if (ht->table[index] == NULL)
	{
		ht->table[index] = newNode;
	}else
	{
		Node *currentNode = ht->table[index];
		while(currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
}
int get(HashTable *ht, const char *key)
{
	unsigned int index = hash(key);

	if (ht->table[index] != NULL)
	{
		Node *currentNode = ht->table[index];
		while (currentNode != NULL)
		{
			if (strcmp(currentNode->pair.key, key) == 0)
				return currentNode->pair.value;
		}
		currentNode = currentNode->next;
	}
	else
	{
		print("not found");
		return (-1);
	}
	return (-1);
}
int main()
{
	HashTable ht;
	initializeHashTable(&ht);
	insert(&ht, "apple", 5);
	insert(&ht, "banana", 10);
	insert(&ht, "orange", 15);

	printf("Value for 'apple': %d\n", get(&ht, "apple"));       // Output: 5
	printf("Value for 'banana': %d\n", get(&ht, "banana"));     // Output: 10
	printf("Value for 'orange': %d\n", get(&ht, "orange"));     // Output: 15
	printf("Value for 'grape': %d\n", get(&ht, "grape"));

	return (0);
}
