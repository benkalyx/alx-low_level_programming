#include "main.h"
/**
* times_table - A function to print 9 times table starting from 0
*
* @void: The argument is void
*
* Return: 0 (Success) otherwise return 1
*/
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if
			(b == 0)
			{
				_putchar(c + 48);
			}
			if
			(c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + 48);
			}
			else if
			(c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
