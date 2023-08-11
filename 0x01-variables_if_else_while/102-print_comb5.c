#include<stdio.h>
/**
* main - A program to print all possible combinations of two two digit numbers
* Return: The return value is 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
	for (j = i + 0; j <= 99; j++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	if (i == 98 && j == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
