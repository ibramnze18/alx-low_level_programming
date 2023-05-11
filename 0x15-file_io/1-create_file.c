#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: File pointer
 * @text_content: String to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int write_str;
	int str_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str_length = 0; text_content[str_length];)
			str_length++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_str = write(fp, text_content, str_length);

	if (fp == -1 || write_str == -1)
		return (-1);

	close(fp);

	return (1);
}
