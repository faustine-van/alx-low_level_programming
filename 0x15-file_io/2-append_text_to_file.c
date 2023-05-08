#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to be created
 * @text_content: content of file
 * Return: 1 on success , -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file;

	if (filename == NULL)
		return (-1);

	o_file = open(filename, O_WRONLY | O_APPEND,
			S_IRUSR | S_IWUSR);
	if (o_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		write(o_file, text_content, strlen(text_content));
	}

	close(o_file);
	return (1);
}
