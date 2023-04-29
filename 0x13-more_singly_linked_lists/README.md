# 0x13. C - More singly linked lists

## Description

this task is for using singled linked list

## usage
-All your files will be compiled on Ubuntu 20.04 LTS
-run using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-The prototypes of all your functions should be included in your header file called lists.h

### More info

Please use this data structure for this project:
```
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
```
