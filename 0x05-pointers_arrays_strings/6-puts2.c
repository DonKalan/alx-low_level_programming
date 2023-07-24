#include "main.h"

/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
