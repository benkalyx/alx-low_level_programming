#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - A program to generate random password
* Return: Always 0
*/
int main(void)
{
	int password = 0, random = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (random < 4567)
	{
		password = rand() % 128;
		if ((random + password) > 4567)
			break;
		random = random + password;
		printf("%c", password);
	}
	printf("%c\n", (4567 - random));
	return (0);
}
