#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - Write a function that returns the sum of all its parameters.
*@n: a variable
*Return: 0
**/

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int willy;
	va_list args;

	if (n == 0)
		return (0);
	/* Init list */
	va_start(args, n);
	/* Iterate through the list */
	for (willy = 0; willy < n; willy++)
	{
	/* Will add current arg to total and move to the next one */
		total += va_arg(args, int);
	}
	/*End va_arg*/
	va_end(args);
	return (total);
}
