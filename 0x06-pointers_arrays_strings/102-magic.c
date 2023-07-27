#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5] = {98, 402, 198, 298, 1024};
	int *p;

	p = a;
	*(p + 2) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
