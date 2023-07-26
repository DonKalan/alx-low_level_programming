#include "main.h"
#include <stddef.h>
/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	if (str == NULL)
		return (NULL);

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = str;

	while (*ptr)
	{
		char *letter = alphabet;
		char *rot13_letter = rot13_alphabet;
		int found = 0;

		while (*letter && !found)
		{
			if (*ptr == *letter)
			{
				*ptr = *rot13_letter;
				found = 1;
			}
			letter++;
			rot13_letter++;
		}

		ptr++;
	}

	return (str);
}
