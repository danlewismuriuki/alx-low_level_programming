#include "main.h"
#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function that makes a file and writes text conten to it.
 * @filename: The file we are to creating
 * @text_content: string to write to the file
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate the length of the text_content */
	while (text_content[content_length] != '\0')
	{
		content_length++;
	}
	}

    /* Create a file with read and write permissions for the owner only */

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_result = write(file_descriptor, text_content, content_length);

	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

