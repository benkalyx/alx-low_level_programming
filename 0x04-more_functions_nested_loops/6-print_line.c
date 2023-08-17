#include "main.h"
/**
* print_line - A function to print straight lines
*
* @n: The argument passed to the function
*
* Return: 0 for success, otherwise return 1
*/
void print_line(int n)
{
	if
	(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
