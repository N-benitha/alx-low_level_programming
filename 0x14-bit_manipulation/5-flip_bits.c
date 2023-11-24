#include "main.h"

/**
 * flip_bits - flips the bits
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int h;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		h = ex >> i;
		if (h & 1)
			counter++;
	}
	return (counter);
}
