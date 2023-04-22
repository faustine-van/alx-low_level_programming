#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner);
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy",3.5, "Bob" );
    printf("the name is %s am %.lf and my bos is %s", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d = NULL)
    {
        return (NULL);
    }
    d->name = malloc(strlen(name) + 1);
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }
    strcpy(d->name, name);

    d->owner = malloc(strlen(owner) + 1);
    if (d->owner == NULL)
    {
        free(d->owner);
	free(d);
        return (NULL);
    }
    strcpy(d->owner, owner);

    d->age = age;

    return (d);
}
/* 19L01.c Access to structure members */
/*#include <stdio.h>
#include <string.h>

struct employee
        {
                int id;
                char name[50];
                int salary;
        }e1, e2;
struct student
{

        int rollno;
        char name[10];
};
 
int main(void)
 {
        int i;
        
        e1.id = 100;
        strcpy(e1.name, "Faustine");
        e1.salary = 100000;

        e2.id = 101;
        strcpy(e2.name, "Bruno");
        e2.salary = 200000;

        printf("id: %d\n", e1.id);
        printf("name: %s\n", e1.name);
        printf("salary: %d\n", e1.salary);

        printf("id: %d\n", e2.id);
        printf("name: %s\n", e2.name);
        printf("salary: %d\n", e2.salary);
        struct student st[5];
        
        printf("Enter the record of students:");

        for ( i = 0; i < 5; i++)
        {
                printf("\nEnter the number id:");
                scanf("%d", &st[i].rollno);
                printf("\nEnter the number name:");
                scanf("%s", st[i].name);
	}
                printf("\nstudent information are following:");

                for (i = 0; i < 5; i++)
                {
                        printf("\nid = %d\n name = %s\n",st[i].rollno, st[i].name);
                }
        return 0;
 } */
