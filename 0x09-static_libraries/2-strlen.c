#include "main.h"

/**
 * _strlen - shows length of a string
 * @s: takes in a character
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
