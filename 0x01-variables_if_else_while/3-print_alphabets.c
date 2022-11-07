#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  * Return: Always 0
  */

int main(void)
{
	int lowerChar;
	int upperChar;
		for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
		{
			putchar(lowerChar);
			putchar('\n');
		}
		for (upperChar = 'A'; upperChar <= 'Z'; upperChar++)
		{
			putchar(upperChar);
		}
			return 0;
}
