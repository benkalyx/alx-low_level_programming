#include "main.h"
/**
* print_number - A function to print integers
*
* @n: Argument passed in the funtion
*
* Return: 0 (Success)
*/
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar(45);
	}
	else
	{
		a = n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
