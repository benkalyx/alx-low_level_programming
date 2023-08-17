#include "main.h"
/**
* print_most_numbers - A function to print numbers excluding 2 and 4
*
* @void: Argument passed to the function
*
* Return: 0 as success, otherwise return 1
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if
		(a != 2 && a != 4)
		{
			_putchar('0' + a);
		}
	}
	_putchar('\n');
}
