#include "main.h"
/**
* _atoi - A function to convert a string to an integer
* @s: input string
* Return: Always 0
*/
int _atoi(char *s)
{
	int c = 0;
	int min = 1;
	int num = 0;
	unsigned int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			num = 1;
			i = (i * 10) + (s[c] - '0');
			c++;
		}
		if (num == 1)
		{
			break;
		}
		c++;
	}
	i *= min;
	return (i);
}
