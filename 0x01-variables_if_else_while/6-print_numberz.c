#include<stdio.h>
/**
* main - A program to print single digits using putchar
* Return: The return value is 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

