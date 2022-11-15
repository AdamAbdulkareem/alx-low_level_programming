#include "main.h"
/**
  * _isupper - This function checks for uppercase character
  *
  * @c: C takes an integer
  * Return: Always 1 and 0
  */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
