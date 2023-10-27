#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts parameters entering main
 * @argv: pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int n, a;

	a = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		a = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (a);
}
