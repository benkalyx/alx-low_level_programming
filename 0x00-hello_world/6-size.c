#include<stdio.h>
/**
* main - A program that prints the size of various types on a computer.
* Return: 0 (Success)
*/
int main(void)
{
char x;
int y;
float z;
long int yy;
long long int yyy;
printf("Size of a char: %lu is byte(s)\n", sizeof(char));
printf("Size of an int: %lu is byte(s)\n", sizeof(int));
printf("Size of a long int: %lu is byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu is byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu is byte(s)\n", sizeof(float));
return (0);
}
