#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*print_all - Write a function that prints anything.
*@format: a variable
*Return: 0
**/

void print_all(const char * const format, ...)
{
	unsigned int willy = 0;
	char *string;
	va_list list;

	va_start(list, format);
	while (*(format + willy) != '\0' && (format))
	{
		switch (*(format + willy))
		{
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				/* Float is promoted to double */
				printf("%f", va_arg(list, double));
				break;
			case 'c':
				/* Char is promoted to int */
				printf("%c", (char) va_arg(list, int));
				break;
			default:
				willy++;
				continue;
		}
		if (*(format + willy + 1) != '\0')
			printf(", ");
		willy++;
	}
	printf("\n");
	va_end(list);
}
