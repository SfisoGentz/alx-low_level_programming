#include "main.h"

/**
<<<<<<< HEAD
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
=======
 * *_strcat - Entry point
 * Description: Concatenates two strings
 * @dest: Character
 * @src: Character
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
>>>>>>> 87c8b357b64017659844dd9b53fdb6fe903e882e
	return (dest);
}
