#include "main.h"
/**
 * reverse_array - reverses content of an array
 * @a: array of integers
 * @n: number of elements
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp = 0;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
