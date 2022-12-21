#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - a function that sum all the parameter given
  * @n: An input character
  * Return: Always (0)
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list list;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(list, int);
	}

	va_end(list);
	return (result);
}
