#include "main.h"
/**
  * print_alphabet_x10 - prints the alphabet 10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int counter;
		for (counter = 0; counter <= 9; counter++)
		{
			char lowerChar;
				for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
				{
					_putchar(lowerChar);
				}
				_putchar('\n');
		}
}
