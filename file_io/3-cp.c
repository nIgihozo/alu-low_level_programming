#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * close_fd - closes a file descriptor and handles errors
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - copies data from one file descriptor to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source file name for error reporting
 * @file_to: destination file name for error reporting
 */
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t r_bytes, w_bytes;
	char buf[BUF_SIZE];

	while ((r_bytes = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buf, r_bytes);
		if (w_bytes != r_bytes)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	copy_content(fd_from, fd_to, av[1], av[2]);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
