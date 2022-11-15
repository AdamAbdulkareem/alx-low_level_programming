#include "main.h"
/**
  * print_most_numbers - The function prints numbers from 0 to 9
  *
  * Return: Always (void)
  */
void print_most_numbers(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' || digit != '4')
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
