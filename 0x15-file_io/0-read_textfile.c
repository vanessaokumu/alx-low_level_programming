#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of file
 * @letters: number of letters
 * Return: actual number of letters it could read and print or 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
