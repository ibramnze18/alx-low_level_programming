#include "main.h"

/**
 * read_textfile - A functn to read a file and prints the contents
 * @filename: filename.
 * @letters: Number of letters to be printed.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = (malloc(sizeof(char) * (letters)));
	if (!buffer)
		return (0);

	rd = read(fp, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fp);

	free(buffer);

	return (wr);
}
