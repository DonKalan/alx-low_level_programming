#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 *
 * This function finds and returns the largest prime factor of a given number.
 *
 * @num: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor of the given number.
 */
long largest_prime_factor(long num)
{
    long i, largest = -1;

    while (num % 2 == 0)
    {
        num /= 2;
        largest = 2;
    }

    for (i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            num /= i;
            largest = i;
        }
    }

    if (num > 2)
        largest = num;

    return largest;
}

int main(void)
{
    long num = 612852475143;
    long largest_prime = largest_prime_factor(num);

    printf("%ld\n", largest_prime);

    return 0;
}
