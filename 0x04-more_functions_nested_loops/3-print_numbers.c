#include "main.h"
/**
* print_numbers - A function to print numbers from 0 to 9
*
*@void: argument passed to the function as none
*
* Return: 0 always.
*/
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
