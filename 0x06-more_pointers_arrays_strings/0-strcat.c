#include "main.h"

/**
* _strcat - This is a function that concatenates two strings.
* @dest: point the string to be concatenated
* @src: to be appended to dest
* Return: pointer to destination string
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, len_1 = 0;

	while (dest[len++])
		len_1++;
	for (len = 0; src[len]; len++)
	{
		dest[len_1++] = src[len];
	}
	return (dest);
}
