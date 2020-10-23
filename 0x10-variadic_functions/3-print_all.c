#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*print_all - Write a function that prints anything.
*@format: a variable
*Return: 0
**/

void print_all(const char * const format, ...)
{
	int willy = 0;
	char *string;
	va_list list;

	va_start(list, format);
	while (*(format + willy) != '\0')
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
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				/* Float is promoted to double */
				printf("%lf", va_arg(list, double));
				break;
			case 'c':
				/* Char is promoted to int */
				printf("%c", va_arg(list, int));
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
