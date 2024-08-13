#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0 on success, or exits with specified codes on errors.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
		if (fd_from == -1)
	{
	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	dprintf(2, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
	dprintf(2, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	close(fd_to);
	exit(99);
	}
	}

	if (bytes_read == -1)
	{
	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	close(fd_from);
	close(fd_to);
	exit(98);
	}
	
	if (close(fd_from) == -1)
	{
	dprintf(2, "Error: Can't close fd %d\n", fd_from);
	exit(100);
	}
	
	if (close(fd_to) == -1)
		{
	dprintf(2, "Error: Can't close fd %d\n", fd_to);
	exit(100);
	}

	return (0);
}
