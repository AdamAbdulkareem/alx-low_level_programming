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
		for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
		{
			putchar(lowerChar);
		}
		for (lowerChar = 'A'; lowerChar <= 'Z'; lowerChar++)
		{
			putchar(lowerChar);
			putchar('\n');
		}
			return (0);
}
