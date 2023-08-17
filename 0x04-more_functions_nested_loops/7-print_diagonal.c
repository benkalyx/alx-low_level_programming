#include "main.h"
/**
* print_diagonal - A function to print diagonal lines
*
* @n: The argument passed to the function
*
* Return: 0 for success, otherwise return 1
*/
void print_diagonal(int n)
{
	if
	(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if
				(j == i)
				_putchar('\\');
				else if
				(j < i)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
