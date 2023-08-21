#include "main.h"
/**
* rev_string - A function that reverses a string
* 
* @s: A pointer passed as argument
*
* Return: Always 0
*/
void rev_string(char *s)
{
	int length, reverse, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	{
		reverse = 0;
		half = length / 2;
	}
	while (half--)
	{
		temp = s[length - reverse - 1];
		s[length - reverse -1] = s[reverse];
		s[reverse] = temp;
		reverse++;
	}
}
