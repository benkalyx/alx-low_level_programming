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
	char reverse = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		reverse = s[i];
		s[i] = s[count];
		s[count] = reverse;
	}
}
