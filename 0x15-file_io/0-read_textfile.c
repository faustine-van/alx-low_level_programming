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
	int open_file, read_file1;
	char *c;

	if (filename == NULL)
	{
		return (0);
	}

	c = calloc(letters, sizeof(char));
	if (c == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);

	if (open_file == -1)
	{
		close(open_file);
		return (0);
	}

	read_file1 = read(open_file, c, letters);

	if (read_file1 == -1)
	{
		close(open_file);
		return (0);
	}

	dprintf(1, "%s", c);

	close(open_file);

	return (1);
}
