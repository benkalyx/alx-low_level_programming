#include "main.h"
/**
* print_rev - A function to print the reverse of a string
*
* @s: The point to pass as argument to the function
*
* Return: Always 0
*/
void print_rev(char *s)
{
	int reverse = 0;

	while (s[reverse])
		reverse++;
	while (reverse--)
		_putchar(s[reverse]);
	_putchar('\n');
}
