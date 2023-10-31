#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: arg count in main
 * @av: args passed to main
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, l, m;

	if (ac == 0 || av == NULL)
		return (0);
	l = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		m = 0;
		while (av[i][m])
			m++;
		l += m + 1;
	}
	str = malloc((l + 1) * sizeof(char));
	if (str == 0)
		return (0);
	for (j = 0; j < ac; j++)
	{
		m = 0;
		while (av[j][m])
		{
			*(str + k) = av[j][m];
			k++;
			m++;
		}
		*(str + k) = '\n';
		k++;
	}
	*(str + k) = '\0';
	return (str);
}
