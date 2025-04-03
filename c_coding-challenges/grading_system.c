#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 * Description: This program takes student marks as input
 *              and assigns grades based on the marks.
 * Return: 0 (Success)
 */
int main(void)
{
    int marks, i, scores[100], count = 0;
    char grades[100];

    printf("Enter marks between 0 - 100 until -1\n");

    while (1)
    {
        printf("Enter marks %d: ", count + 1);
        scanf("%d", &marks);

        if (marks == -1)
        {
            break;
        }
        else if (marks < 0 || marks > 100)
        {
            printf("Invalid input! Marks should be between 0 and 100.\n");
        }
        else
        {
            scores[count] = marks;

            if (marks >= 80)
                grades[count] = 'A';
            else if (marks >= 70)
                grades[count] = 'B';
            else if (marks >= 60)
                grades[count] = 'C';
            else if (marks >= 50)
                grades[count] = 'D';
            else
                grades[count] = 'F';

            count++;
        }
    }

    printf("\nStored Grades:\n");

    for (i = 0; i < count; i++)
    {
        printf("Student %d marks: %d = Grade %c\n", i + 1, scores[i], grades[i]);
    }

    return (0);
}
