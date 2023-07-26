#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
	int length_of_string = 0;
	int z;

	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';

	return (dest);
}
