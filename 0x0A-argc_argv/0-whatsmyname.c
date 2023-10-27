#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts parameters going into main
 * @argv: pointer to array of pointers containing strings going in main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
