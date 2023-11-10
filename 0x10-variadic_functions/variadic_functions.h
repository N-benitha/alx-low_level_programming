#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_int(va_list ap);
void print_float(va_list ap);
void print_char(va_list ap);
void print_string(va_list ap);
/**
 * struct printingStruct - structure definition
 * @type: type
 * @toprint: function to print
 */
typedef struct printingStruct
{
	char *type;
	void (*toprint)(va_list);
} printingStruct;
#endif
