#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if not
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;

		rwr = write(fd, text_content, numletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
