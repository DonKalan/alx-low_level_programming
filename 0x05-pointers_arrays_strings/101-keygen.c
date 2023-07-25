#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - Entry point of the program
 *
 * Description: This program generates random valid passwords for 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	int rand_index;

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		rand_index = rand() % (sizeof(charset) - 1);
		password[i] = charset[rand_index];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);
	return (0);
}
