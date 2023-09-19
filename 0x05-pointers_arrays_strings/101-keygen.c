#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 * generate_password - generate password.
 * @password: password.
 */
void generate_password(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
		password[i] = 'A' + (rand() % 26);

	password[PASSWORD_LENGTH] = '\0';
}

/**
 * main - entry point.
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	generate_password(password);
	printf("%s\n", password);
	return (0);
}
