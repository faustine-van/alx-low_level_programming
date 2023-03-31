#include "main.h"
#include <stdio.h>
#include <string.h>1
/**
 *rot13 - encode using rot13
 *@c: to be tested
 *Return: cV
*/
char *rot13(char *c)
{
	char *d = c[1];
	int n;
	for (n = 0, len = strlen(d); n < len; n++)
    {
        int currentLetter = d[n];

        char cipher = currentLetter + key;
        if ((currentLetter - 'a') + key > 26)
        {
            key =((currentLetter - 'a') + key) % 26;
            cipher = 'a' + key;
        }
        key = 13;
	return (d)
        }

    } 
}
