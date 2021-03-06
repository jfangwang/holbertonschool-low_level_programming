#include "stdio.h"
#include "stdarg.h"
#include "string.h"
#include "stdlib.h"
#include "function_pointers.h"
/**
*print_name - Write a function that prints a name.
*@name: a variable
*@f: a variable
*Return: 0
**/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
