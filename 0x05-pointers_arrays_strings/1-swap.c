#include "main.h"
/**
 * swap_int - swaps values of 2 integers
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
