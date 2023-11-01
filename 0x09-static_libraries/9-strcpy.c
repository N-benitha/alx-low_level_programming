#include "main.h"

/**
 * *_strcpy - copies string to buffer pointed by dest
 * @dest: pointer
 * @src: ponts to a string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
