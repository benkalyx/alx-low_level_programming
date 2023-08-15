#include "main.h"
/**
* print_last_digit - A function to print last digit of a number
*
* @n: Only integer value n is passed as argument
*
* Return: 0 (Success), otherwise return 1 as error
*/
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;
	if
	(last_d < 0)
	{
		_putchar(-last_d + 48);
		return (-last_d);
	}
	else
	{
		_putchar(last_d + 48);
		return (last_d);
	}
}
