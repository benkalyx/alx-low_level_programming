#include "main.h"
/**
* _isalpha - A function to check for alphabetic character
*
* @c: A character to check for whether in uppercase or lowercase
*
* Return: returns 1 if success and 0 otherwise
*/
int _isalpha(int c)
{
	if
	((c <= 97 && c <= 122) || (c <= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
