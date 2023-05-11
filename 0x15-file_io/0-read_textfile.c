#include "main.h"

/**
 * read_textfile - Function to read txt file & print it to the POSIX std output
 * @filename: Filename to read from.
 * @letters: Letters is the number of letters it should read and print
 * Return: Actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t w;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fp);
	return (w);
}
