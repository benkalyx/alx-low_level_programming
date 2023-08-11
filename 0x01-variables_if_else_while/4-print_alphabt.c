#include<stdio.h>
/**
* main - A program to print alphabets excluding some characters
* Return: 0 as success
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		if
		(i == 'e' || i == 'q')
		{
			continue;
			i++;
		}
		else
			putchar(i);
	putchar('\n');
	return (0);
}
