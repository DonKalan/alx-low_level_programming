#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 * This function prints the character '_' a specified number of times,
 * followed by a newline character '\n'.
 *
 * @n: The number of times the character '_' should be printed.
 *     If n is 0 or less, the function only prints a newline character.
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    while (n > 0)
    {
        _putchar('_');
        n--;
    }

    _putchar('\n');
}
