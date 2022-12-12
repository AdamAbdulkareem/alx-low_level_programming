#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - a function that prints name
  * @name: An input character
  * Reurn: Always void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

