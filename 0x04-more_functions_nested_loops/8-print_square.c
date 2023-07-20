#include "main.h"

/**
 * print_square - Prints a square of a given size using the character '#'.
 *
 * This function prints a square of a given size, using the character '#'.
 * The square is printed to the terminal, followed by a newline character '\n'.
 *
 * @size: The size of the square.
 *        If size is 0 or less, the function only prints a newline character.
 */
void print_square(int size)
{
    int row, column;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 0; row < size; row++)
    {
        for (column = 0; column < size; column++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
