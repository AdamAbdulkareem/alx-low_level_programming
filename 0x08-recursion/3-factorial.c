#include "main.h"
/**
  * factorial - a function that return the factorial of a number
  * @n: An input character
  * Return: Always 0
  */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
