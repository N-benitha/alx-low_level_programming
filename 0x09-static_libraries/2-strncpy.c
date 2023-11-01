#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}
	return (dest);
}
