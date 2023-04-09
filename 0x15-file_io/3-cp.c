#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - cp command copy a file to another file
 *
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, 97 on failure
 */
int main(int ac, char **av)
{
	int res;
	char *file_from = av[1];
	char *file_to = av[2];
	char *buffer[1024];
	int fd_from, fd_to, read_from, write_to;


	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	read_from = read(fd_from, buffer, 1024);
	if (read_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	write_to = write(fd_to, buffer, read_from);
	if (write_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	res = close(fd_from);
	if (res == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}
	res = close(fd_to);
	if (res == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}
	
	return (0);
}
