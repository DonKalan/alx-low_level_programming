#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.	
 * @s: Pointer to the input string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int full_length, half_length;

	full_length = 0;
	while (str[full_length] != '\0')
		full_length++;

	half_length = full_length / 2;

	if (full_length % 2 == 1)
		half_length++;

	while (half_length < full_length)
	{
		_putchar(str[half_length]);
		half_length++;
	}
	_putchar('\n');
}
