#include "main.h"
/**
 * *_strncat - concatenates 2 strings and uses n bytes from one string
 * @dest: string 1
 * @src: string 2
 * @n: bytes from 2nd string
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
