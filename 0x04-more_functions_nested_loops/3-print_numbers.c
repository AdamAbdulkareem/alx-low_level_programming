#include "main.h"
/**
  * print_numbers - The function prints the numbers from 0 to 9
  *
  * Return: Always void
  */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
		_putchar('\n');
}
