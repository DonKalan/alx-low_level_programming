#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size using the character '#'.
 *
 * This function prints a triangle of a given size, using the character '#'.
 * The triangle is printed to the terminal, followed by a newline character '\n'.
 *
 * @size: The size of the triangle.
 *        If size is 0 or less, the function only prints a newline character.
 */
void print_triangle(int size)
{
    int row, column;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        for (column = 1; column <= row; column++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}

