#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - fucntion reads a text file and prints the contents
 * @filename: pointer to the filename
 * @letters: size of the letters
 * Return: Returns actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int c;
	size_t letter_count = 0;
	FILE *My_file;

	if (filename == NULL)
	{
		perror("Error opening file");
		return (0);
	}
	My_file = fopen(filename, "r");

	if (My_file == NULL)
	{
		return (0);
	}

	while (letter_count < letters && (c = fgetc(My_file)) != EOF)
	{
		putchar(c);
		letter_count++;
	}
	fclose(My_file);
	while (letter_count < letters && ferror(My_file))
	{
		return (0);
	}
	return ((ssize_t)letter_count);
}
