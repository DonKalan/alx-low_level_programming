#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_table[256] = {0};
	char *ptr = str;
	char *leet_chars = "AEOTLaeotl";
	char *leet_nums = "4307143071";
	int i;

	for (i = 0; leet_chars[i]; i++)
		leet_table[(unsigned char)leet_chars[i]] = leet_nums[i];
	while (*ptr)
	{
		unsigned char c = *ptr;

		if (leet_table[c] != 0)
			*ptr = leet_table[c];
		ptr++;
	}
	return (str);
}
