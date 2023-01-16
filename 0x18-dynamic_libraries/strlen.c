#include "main.h"
/**
 * _strlen - a function that prints a integer
 * @s: An input character
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
