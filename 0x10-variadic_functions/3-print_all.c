#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints an integer
 * @ap: arguments
 * Return: nothing
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - prints a float
 * @ap: arguments
 * Return: nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_char - prints a character
 * @ap: arguments
 * Return: nothing
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_string - prints a string
 * @ap: arguments
 * Return: nothing
 */
void print_string(va_list ap)
{
	char *c = va_arg(ap, char *);

	if (c == NULL)
		printf("(nil)");
	printf("%s", c);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *separator = "";

	printingStruct printing[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_string },
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format [i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printing[j].type == format[i])
			{
				printf("%s", separator);
				printing[j].toprint(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
