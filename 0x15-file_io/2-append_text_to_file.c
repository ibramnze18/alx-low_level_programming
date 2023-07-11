#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: filename.
 * @text_content: Adds no content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int letters;
	int wr;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr = write(fp, text_content, letters);

		if (wr == -1)
			return (-1);
	}

	close(fp);

	return (1);
}
