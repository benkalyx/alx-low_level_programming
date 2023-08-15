#include "main.h"
/**
* print_sign - A function that prints the sign of a number
*
* @n: integer value to be accepted as argument
*
* Return: 1 for positive, -1 for negative value of n, and 0 for zero
*/
int print_sign(int n)
{
	if
	(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if
	(n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
