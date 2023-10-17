#include "main.h"
/**
 * rev_string - print in reverse
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, len;
	char a, b;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	j = len - 1;
	i = 0;

	while (j > i)
	{
		a = s[i];
		b = s[j];
		s[i] = b;
		s[j] = a;
		j--;
		i++;
	}
}
