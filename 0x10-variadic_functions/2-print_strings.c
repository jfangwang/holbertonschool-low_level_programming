#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*print_strings - Write a function that prints strings, followed by a new line.
*@separator: a variable
*@n: a variable
*Return: 0
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int willy;
	char *c;

	if (separator != NULL)
	{
		va_start(list, n);
		for (willy = 0; willy < n; willy++)
		{
			c = va_arg(list, char *);
			if (c == NULL)
				printf("(nil)");
			else
				printf("%s", c);
			if (willy < n - 1 && separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
