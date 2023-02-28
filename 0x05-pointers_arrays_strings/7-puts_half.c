#include "main.h"

/**
* puts_half - prints half of the screen
*@str: input
*/

void puts_half(char *str)
{
	int leng = 0;

	while (*str != '\0')
	{
		leng++;
		str++;
	}

	str -= (leng / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
