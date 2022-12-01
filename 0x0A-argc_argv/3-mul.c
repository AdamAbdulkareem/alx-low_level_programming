#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: An input character
  * @argv: An inout character
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
		return (0);
	}
}
