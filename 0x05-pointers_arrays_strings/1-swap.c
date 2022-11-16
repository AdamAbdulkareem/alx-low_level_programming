#include "main.h"
/**
  * swap_int - The function swaps the values of two integers
  * @a: The first parameter
  * @b: The second parameter
  * Return: Always return void
  */
void swap_int(int *a, int *b)
{
	int store = *a;
	*a = *b;
	*b = store;
}
