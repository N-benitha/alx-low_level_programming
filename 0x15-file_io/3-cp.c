#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: double pointer
 * Return: 0 at success
 */

int main(int argc, char **argv)
{
	int cread, cwrite, file;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cread = open(argv[1], O_RDONLY);
	if (cread == -1)
	{
		dprintf(STDERR_FILENO, "Err: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cwrite = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((file = read(cread, buf, 1024)) > 0)
	{
		if (write(cwrite, buf, file) != file || cwrite == -1)
		{
		dprintf(STDERR_FILENO, "Err: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Err: Can't read from file %s\n", argv[1]);
		exit(100);
	}
	if (close(cread) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", cread);
		exit(100);
	}
	if (close(cwrite) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", cwrite);
		exit(100);
	}
	return (0);
}
