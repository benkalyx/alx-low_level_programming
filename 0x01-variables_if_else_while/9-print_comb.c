#include<stdio.h>
/**
* main - A program to print all possible combinations of single digit numbers
* Return: The return value is 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
