#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts parameters entering main
 * @argv: pointer of array of pointers containing strings going in main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
