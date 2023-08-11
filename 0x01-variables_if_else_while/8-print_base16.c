#include<stdio.h>
/**
* main - A program to print all the numbers of base 16 in lowercase
* Return: The return value is 0
*/
int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
