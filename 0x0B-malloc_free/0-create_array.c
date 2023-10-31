#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: size of array
 * @c: character
 * Return: 0 if size is 0, pointer to array if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size <= 0)
		return (0);
	ar = malloc(sizeof(char) * size);
	if (ar == 0)
		return (0);
	for (i = 0; i < size; i++)
		*(ar + i) = c;
	*(ar + i) = '\0';
	return (ar);
}
