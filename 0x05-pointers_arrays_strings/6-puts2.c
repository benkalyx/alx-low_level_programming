#include "main.h"
/**
* puts2 - A function to print every other character of a string
*
* @str: The argument passed to the function
*
* Return: Always 0
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
