#include<stdio.h>
/**
* main - A program to print all possible combinations of single digit numbers
* Return: The return value is 0
*/
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if
		(i == 9)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
