/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	int num_digits = 0;
	int temp = n;
	int divisor = 1;

	while (temp != 0)
	{
		num_digits++;
		temp /= 10;
		divisor *= 10;
	}

	if (n == divisor)
		_putchar('1');

	while (divisor > 1)
	{
		divisor /= 10;
		int digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
	}
}
