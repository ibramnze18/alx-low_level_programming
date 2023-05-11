#include "main.h"

char *create_buffer(char *filename);
void _close_file(int file_descriptor);

/**
 * create_buffer - Function to allocates 1024 bytes to a buffer
 * @filename: The buffer file name.
 * Return: Newly allocated buffer.
 */
char *create_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * _close_file - Close file function
 * @file_descriptor: The file descriptor
 */
void _close_file(int file_descriptor)
{
	int closed;

	closed = close(file_descriptor);

	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fle %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - Main function
 * @argc: Argument count
 * @argv: Argument variables.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: copies file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_file = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_file = write(to, buffer, read_file);
		if (to == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_file = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer);
	_close_file(from);
	_close_file(to);

	return (0);
}
