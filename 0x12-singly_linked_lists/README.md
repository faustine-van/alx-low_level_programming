# 0x12. C - Singly linked lists

## Descpription 
- simple implementaion using singled linked list

## installation 

1.git clone

## Usage

- All your files will be compiled on Ubuntu 20.04 LTS 
- run using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- The prototypes of all your functions should be included in your header file called lists.h

## More info
#### use this data structure for this project:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Excpetion

### File: 101-hello_holberton.asm

write 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
### usage 
- Run using nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
- You are only allowed to use the printf function
- You are not allowed to use interrupts
