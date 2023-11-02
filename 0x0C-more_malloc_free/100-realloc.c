#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: size of memory to be copied
 * Return: memory copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: mew size in bytes of the new memory block
 * Return: ptr if sizes are equal, null if new_size is zero and ptr is not
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == 0)
			return (0);
		free(ptr);
		return (ptr2);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == 0)
		return (0);
	_memcpy(ptr2, ptr, old_size);
	free(ptr);
	return (ptr2);
}
