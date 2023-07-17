#include <stdio.h>
/**
 * main - Entry point
 * Retuirn: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = 0; hundreds < 8; hundreds++)
	{
		for (tens = hundreds + 1; tens < 9; tens++)
		{
			for (ones = tens + 1; ones < 10; ones++)
			{
					putchar(hundreds + '0');
					putchar(tens + '0');
					putchar(ones + '0');

					if (!(ones == tens || tens == hundreds))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	putchar('\n');
	return (0);
}
