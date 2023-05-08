#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#define BUFFER_SIZE 1024

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content of file
 * Return: 1 on success , -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int create_file, write_content;
	/*char c[BUFFER_SIZE];*/

	if (filename == NULL)
		return (-1);

	create_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (create_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_content = write(create_file, text_content,
				strlen(text_content));
		if (write_content == -1)
		{
			close(create_file);
			return (-1);
		}
	}
	close(create_file);
	return (1);
}
