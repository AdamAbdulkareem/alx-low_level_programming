#include <stdio.h>

/**
  * print_alphabet - Print all the alphabets
  *
  * Return: Always 0
  */
int main(void)
{
	char lowerChar;
	for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
	{
		putchar(lowerChar);
		putchar('\n');
	}
	return (0)
}
