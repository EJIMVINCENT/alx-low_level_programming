#include "main.h"

/**
 * puts_half - prints half of str
 *
 * @str: input pointerstr
 *
 */

void puts_half(char *str)
{
	int i;
	int len;

	for (len  = 0; str[len] != '\0'; len++)
	;

	if (len / 2 == 0)
	{
		i = len / 2;
		while (str[i] < len)
		{
			_putchar(str[i]);
			i++;
		}
	}

	else
	{
		i = (len - 1) / 2;
		while (str[i] < len)
		{
			_putchar(str[i]);
			i++;
		}

	}
}
