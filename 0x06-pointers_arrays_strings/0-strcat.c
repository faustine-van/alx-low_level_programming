#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcat - append the src string to dest string
 *@dest: pointer to appended by src
 *@src: pointer to append to dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	
	while (src[i] != '\0') {
        *dest[i] = *src[i];
        i++;
    }
  
    str3[j] = '\0';
	return (dest);
       
}
