#include "main.h"

/**
  * print_alphabet - a function that prints the alphabet
  * in lowercase followed by a new line.
  * Return: void
  */
void print_alphabet(void)
{
	char lowerCase;
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			_putchar(lowerCase);
		}
			_putchar('\n');
}
