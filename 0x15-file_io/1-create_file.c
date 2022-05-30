#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text content written in the file.
 *
 * Return: 1 if success. -1 if failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;

	rwr = write(fd, text_content, numletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1)
}
