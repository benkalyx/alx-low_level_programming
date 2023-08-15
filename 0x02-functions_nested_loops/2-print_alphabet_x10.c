#include "main.h"
/**
* print_alphabet_x10 -  A program to print alphabets 10 times
* Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
