#include "main.h"
/**
* print_square - A function to print squares
*
* @size: argument passed to the function
*
* Return: 0 as success, otherwise return 1
*/
void print_square(int size)
{
	if
	(size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
