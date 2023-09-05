#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Exit the program with an error code and print an error message
 * @massage: The error message to print
 * @code: The error code to exit with
 */
void error_exit(int code, const char *message)

{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * open_source_file - for reading and handle errors if it fails
 * @file_from: name of the source file
 *
 * Return: The file descriptor of the opened source file
 */
int open_source_file(const char *file_from)
{
	int fd_src = open(file_from, O_RDONLY);

	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return (fd_src);
}

/**
 * open_destination_file - for writing and handle errors if it fails
 * @file_to: The name of the destination file
 *
 * Return: The file descriptor of the opened destination file
 */
int open_destination_file(const char *file_to)
{
	int fd_dst = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_dst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	return (fd_dst);
}

/**
 * copy_file_contents - Copy the contents of the source
 * file to the destination file
 * @fd_src: The file descriptor of the source file
 * @fd_dst: The file descriptor of the destination file
 */
void copy_file_contents(int fd_src, int fd_dst)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dst, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Write error to file\n");
			close(fd_src);
			close(fd_dst);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		close(fd_src);
		close(fd_dst);
		exit(98);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}

	const char *file_from = argv[1];

	int fd_src = open_source_file(file_from);
	int fd_dst = open_destination_file(file_to);

	copy_file_contents(fd_src, fd_dst);

	if (close(fd_src) == -1 || close(fd_dst) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		exit(100);
	}

	return (0);
}
