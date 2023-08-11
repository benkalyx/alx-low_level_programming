#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - A program to assign a random number and test with conditions

* Return : 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if
(n > 0);
{
printf("is positive");
}
else if
(n < 0);
{
printf("is negative");
}
else
{
printf("is zero");
}
return (0);
}
