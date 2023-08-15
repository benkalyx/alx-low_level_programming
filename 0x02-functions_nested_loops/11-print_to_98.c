#include <stdio.h>
#include "main.h"
/**
* print_to_98 - A function to print all natural numbers from n to 98
*
* @n: An integer value which is passed into the argument
*
* Return: 0 (Success) otherwise return 1
*/
void print_to_98(int n)
{
	int a, b;

	if
	(n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if
			(a != 98)
			{
				printf("%d, ", a);
			}
			else if
			(a == 98)
			{
				printf("%d\n", a);
			}
		}
	}
	else if
	(n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if
			(b != 98)
			{
				printf("%d, ", b);
			}
			else if
			(b == 98)
			{
				printf("%d\n", b);
			}
		}
	}
}
