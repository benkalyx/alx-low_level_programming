#include<stdio.h>
/**
* main - A program to print all different possible combinations of two digits
* Return: The return value is 0
*/
int main(void)
{
	int i;
	int j;

	for (i = '0'; i < '9'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
		if (i != j)
		{
			putchar(i);
			putchar(j);
		if (i == '8' && j == '9')
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
