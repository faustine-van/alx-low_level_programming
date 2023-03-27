#include "main.h"
#define MAXSTRING 446
#include <string.h>
/**
 *_strcpy - copies string from src to dest
 *@dest: variable pointer to be pointed to
 *@src: variable used to copy to the dest
  *Return: return dest
*/
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}
