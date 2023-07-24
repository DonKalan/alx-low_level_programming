#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
