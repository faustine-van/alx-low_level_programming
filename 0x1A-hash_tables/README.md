# C - Hash tables


## More Info

###Data Structures

```
Please use these data structures for this project:

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
## Resources
- [doc.python.org] (https://docs.python.org/3/tutorial)
- [Python Programming: An Introduction to Computer Science 3rd edition](https://nibmehub.com/opac-service/pdf/read/
		Python%20Programming%20_%20an%20introduction%20to%20computer%20science-%203rd%20Edition.pdf)
## Authors:
- MUHAYEMARIYA Faustine | [Github](https://github.com/faustine-van).
