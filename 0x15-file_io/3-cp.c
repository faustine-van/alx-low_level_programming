#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#define BUFFER_SIZE 1024
/**
 * main - copy content of one file to another file
 * @ac: number of argument
 *@av: string argument
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int t_file, f_file;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_file = open(av[1], S_IREAD);
	if (f_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	t_file = open(av[2], O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (t_file == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (read(f_file, buffer, BUFFER_SIZE))
	{
		write(t_file, buffer, strlen(buffer));
		if (read(f_file, buffer, BUFFER_SIZE) == -1)
		{
			dprintf(2, "Error: Can't write to %s", av[2]);
			exit(99);
		}
	}
	if (close(t_file) == -1)
	{
		dprintf(2, "Error: Can't close fd %i", t_file);
		exit(100);
	}
	close(f_file);
	close(t_file);
	return (1);
}
