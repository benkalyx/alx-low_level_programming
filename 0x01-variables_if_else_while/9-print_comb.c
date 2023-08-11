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
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar(' ');
	}
	return (0);
}
