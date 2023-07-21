#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 *
 * This function prints an integer to the standard output using the _putchar
 * function from the main.h header.
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
        print_number(n / 10);

    _putchar(n % 10 + '0');
}
