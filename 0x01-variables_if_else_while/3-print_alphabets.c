#include<stdio.h>
/**
* main - A program to print both lowercase and uppercase of alphabets
* Return: 0 as Success
*/
int main(void)
{
	int i;
	int x;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
