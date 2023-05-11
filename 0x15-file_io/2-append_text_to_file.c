#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: File pointer
 * @text_content: String to add or append to the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, write_str, str_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str_length = 0; text_content[str_length];)
			str_length++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	write_str = write(fp, text_content, str_length);

	if (fp == -1 || write_str == -1)
		return (-1);

	close(fp);

	return (1);
}
