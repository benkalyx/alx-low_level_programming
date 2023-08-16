#include <stdio.h>
/**
* main - A program that finds and print first 98 fibonacci numbers
*
* Return: 0
*/
int main(void)
{
	unsigned long int i;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int j = 1000000000;
	unsigned long int before_1;
	unsigned long int after_1;
	unsigned long int before_2;
	unsigned long int after_2;

	printf("%lu", before);
	for (i = 1; i < 91; i++)
	{
		printf(",%lu", after);
		after += before;
		before = after - before;
	}
	before_1 = (before / j);
	before_2 = (before % j);
	after_1 = (after / j);
	after_2 = (after % j);
	for (i = 92; i < 99; i++)
	{
		printf(",%lu", after_1 + (after_2 / j));
		printf("%lu", after_2 % j);
		after_1 = after_1 + before_1;
		before_1 = after_1 - before_1;
		after_2 = after_2 + before_2;
		before_2 = after_2 - before_2;
	}
	printf("\n");
	return (0);
}
