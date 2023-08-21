#include "main.h"
/**
* swap_int - A function that swaps the values of two integers
*
*@a: The first integer values passed as argument
*
*@b: The second integer value passed as argument to the function
*
* Return: 0 as success
*/
void swap_int(int *a, int *b)
{
	int changed_value = *b;

	*b = *a;
	*a = changed_value;
}
