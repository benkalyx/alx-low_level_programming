#include <stdio.h>
/**
* main - A program that prints 50 fibonacci numbers
*
* Return: 0 if successful, otherwise return 1
*/
int main(void)
{
	int count;
	unsigned long f_1 = 0, f_2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = f_1 + f_2;
		printf("%lu", sum);

		f_1 = f_2;
		f_2 = sum;
		if
		(count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
