#include "main.h"
/**
* more_numbers - A function that prints more numbers
*
* @void: Argument passed to the function
*
* Return: 0 as success, otherwise 1
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if
			(b >= 10)
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}

}
