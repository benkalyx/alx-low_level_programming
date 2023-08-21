#include "main.h"
#include <stdio.h>
/**
* print_array - A function to print n elements of an array
* @a: first integer argument passed to the function
* @n: elements in the array
* Return: Always 0
*/
void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
