#include <stdio.h>
/**
  * main - Entry point of the program
  * Return: Always 0
  */
int main(void)
{
	char lowerChar;
		for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
		{
		if (lowerChar != 'e' && lowerChar != 'q')
			putchar(lowerChar);
		}

	putchar('\n');
	return (0);
}
