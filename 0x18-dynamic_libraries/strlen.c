#include "main.h"
#include <stdio.h>
/**
  * _strlen - A function
  * @s: An input character
  * Return: An integer
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
