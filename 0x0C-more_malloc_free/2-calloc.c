#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - initializes n bytes of memory to a
 * @ptr: initial address
 * @a: variable to initialize with
 * @n: number of bytes to initialize
 * Return: pointer char
 */

char *_memset(char *ptr, int a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = a;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *v;

	if (nmemb == 0 || size == 0)
		return (0);
	v = malloc(nmemb * size);
	if (v == 0)
		return (0);
	_memset(v, 0, size * nmemb);
	return (v);
}
