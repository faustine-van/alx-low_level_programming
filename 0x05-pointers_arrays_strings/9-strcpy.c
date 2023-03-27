#include "main.h"
#define MAXSTRING 446
#include <string.h>
/**
 *_strcpy - copies string from src to dest
 *@dest: variable pointer to be pointed to
 *@dest: variable used to copy to the dest
*/
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src); 

	/*while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}*/
	/*dest = '\0';*/
	return(dest);

}
