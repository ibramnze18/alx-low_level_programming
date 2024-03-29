#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: filename.
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int letters;
	int wr;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;
	wr = write(fp, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fp);

	return (1);
}
