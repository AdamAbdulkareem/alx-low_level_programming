#include "main.h"
/**
  * _isdigit - The function checks for a digit
  * @c: C is an integer
  * Return: Always return 1 and 0
  */
int _isdigit(int c)
{
	char a;
	int digit = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
			digit = 1;
	}
	return (digit);
}
