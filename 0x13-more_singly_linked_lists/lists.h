#ifndef LIST_H
#define LIST_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*function that prints all the elements of a listint_t list.*/
size_t print_listint(const listint_t *h);
/*function that returns the number of elements in a linked listint_t list*/
size_t listint_len(const listint_t *h);
/*function that adds a new node at the beginning of a listint_t list.*/
listint_t *add_nodeint(listint_t **head, const int n);
/*function that adds a new node at the end of a listint_t list.*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*unction that frees a listint_t list.*/
void free_listint(listint_t *head);
#endif
