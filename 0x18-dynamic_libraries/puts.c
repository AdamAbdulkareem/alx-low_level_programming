#include "main.h"

/**
<<<<<<< HEAD
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: An input character
 * Return: Nothing
 */

void _puts(char *str)
=======
  * _puts - A function
  * @s An input character
  * Return: Nothing
  */
void _puts(char *s)
>>>>>>> parent of c39ce3c... Modify files
{
	int string = 0;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string++;
	}
	_putchar('\n');
}
