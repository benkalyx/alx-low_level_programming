#include<stdio.h>
/**
* main - A program to print the reverse of alphabets
* Return: The return value of this program is set to 0
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
