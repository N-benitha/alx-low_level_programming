#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, k = 0;

	if (s1 != NULL)
		for (; s1[i]; i++)
			;
	if (s2 != NULL)
		for (; s2[j]; j++)
			;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		str[k] = s2[k - i];
		k++;
	}
	str[k] = '\0';
	return (str);
}
