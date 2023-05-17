#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: file name
 *@letters: number of characters
 *Return: number of character(letters)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, a = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	while (a < bytes_read)
	{
		if (write(STDOUT_FILENO, &buffer[a], 1) == -1)
		{
			free(buffer);
			return (0);
		}
		a++;
	}
	close(fd);
	free(buffer);
	return (bytes_read);
}
