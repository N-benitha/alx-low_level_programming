#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2d array of integers
 * @width: columns
 * @height: rows
 * Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int i, j, k, ar;

	ar = 0;
	if (width <= 0 || height <= 0)
		return (0);
	str = malloc(height * sizeof(int *));
	if (str == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(str + i) = malloc(width * sizeof(int));
		if (*(str + i) == 0)
		{
			ar = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			str[i][j] = 0;
		}
	}
	if (ar == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(str + k));
		}
		free(str);
	}
	return (str);
}
