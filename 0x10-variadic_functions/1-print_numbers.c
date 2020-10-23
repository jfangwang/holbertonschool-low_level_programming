#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*print_numbers - Write a function that prints numbers, followed by a new line.
*@separator: a variable
*@n: a variable
*Return: 0
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int willy;
	va_list args;

	/* Init list */
	va_start(args, n);
	/* Iterate through the list */
	for (willy = 0; willy < n; willy++)
	{
		printf("%d", va_arg(args, int));
		if (separator && willy < n - 1)
			printf("%s", separator);
	}
	/*End va_arg*/
	printf("\n");
	va_end(args);
}
