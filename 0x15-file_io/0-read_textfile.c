#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t cread, cwrite;
	char *buf;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	cread = read(file, buf, letters);
	cwrite = write(STDOUT_FILENO, buf, cread);

	close(file);

	free(buf);

	return (cwrite);
}
