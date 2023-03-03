#include "main.h"

/**
* *_strcat - function that concatenates two strings
* @dest: points to the string to be concatinated
* @src: to be append to dest
* Return: pointer to destination string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_1 = 0;

	while (dest[i++])
	{
		dest_1++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dest_1++] = src[i];
	}
	return (dest);
}
