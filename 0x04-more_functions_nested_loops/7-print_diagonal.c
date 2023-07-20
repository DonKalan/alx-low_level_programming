#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 *
 * This function prints the character '\' n times in a diagonal pattern,
 * followed by a newline character '\n'.
 *
 * @n: The number of times the character '\' should be printed.
 *     If n is 0 or less, the function only prints a newline character.
 */
void print_diagonal(int n)
{
    int i, spaces;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (spaces = 0; spaces < i; spaces++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
