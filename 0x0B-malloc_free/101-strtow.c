#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wordcount - counts number of words
 * @sw: string
 * Return: int
 */

int wordcount(char *sw)
{
	int l, wc;

	l = 0, wc = 0;
	if (*(sw + l) == ' ')
		l++;
	while (*(sw + l))
	{
		if (*(sw + l) == ' ' && *(sw + l - 1) != ' ')
			wc++;
		if (*(sw + l) != ' ' && *(sw + l + 1) == 0)
			wc++;
		l++;
	}
	return (wc);
}
/**
 * trailingsp - moves address to remove traling whitespaces
 * @st: string
 * Return: pointer
 */

char *trailingsp(char *st)
{
	while (*st == ' ')
		st++;
	return (st);
}
/**
 * strtow - splits string into words
 * @str: string
 * Return: double pointer
 */

char **strtow(char *str)
{
	char **s, *ts;
	int l, l1, wc, i, j, ar, k;

	if (str == NULL || *str == 0)
		return (0);
	ar = 0;
	wc = wordcount(str);
	if (wc == 0)
		return (0);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	ts = trailingsp(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (*(ts + l) != ' ' && *(ts + l) != 0)
			l++;
		s[i] = malloc((l + 1) * sizeof(char));
		if (s[i] == 0)
		{
			ar = 1;
			break;
		}
		for (j = 0, l1 = 0; l1 < l; l1++, j++)
			s[i][j] = *(ts + l1);
		s[i][j] = '\0';
		ts = trailingsp(ts + l);
	}
	s[i] = NULL;
	if (ar == 1)
	{
		for (k = 0; k <= i; k++)
			free(s[k]);
		free(s);
	}
	return (s);
}
