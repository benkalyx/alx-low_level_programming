#include "main.h"
/**
* _strlen - A function to print the length of a string
*
* @s: The pointer to get the string
*
* Return: always 0
*/
int _strlen(char *s)
{
	int length_of_str = 0;

	while (s[length_of_str])
		length_of_str++;
	return (length_of_str);
}
