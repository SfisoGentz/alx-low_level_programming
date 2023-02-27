#include "main.h"

/**
* _puts - print a string to the stdout
*@str: string to print
*Return: the length of the strng
*/

void _puts(char *str)
{
	int a = 0;


	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
