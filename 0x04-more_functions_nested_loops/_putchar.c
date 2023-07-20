#include <unistd.h>

/**
 * _putchar - Custom implementation of the putchar function.
 *
 * This function is used to write a single character to the standard output.
 * It uses the write system call from the unistd.h header to write the character
 * to the file descriptor 1, which corresponds to the standard output (stdout).
 *
 * @c: The character to be written to the standard output.
 *
 * Return: On success, returns the number of bytes written (1).
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

