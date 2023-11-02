#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int size, i, j;

	if (min > max)
		return (0);
	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;
	a = malloc(sizeof(int) * size);
	if (a == 0)
		return (0);
	for (i = 0, j = min; j <= max; i++, j++)
		a[i] = j;
	if (max == min)
		a[i] = max;
	return (a);
}
