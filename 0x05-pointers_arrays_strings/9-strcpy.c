#include "main.h"
/**
* *_strcpy - a function to copy the string
*
* @dest: A pointer argument
* @src: a pointer argument
*
* Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
