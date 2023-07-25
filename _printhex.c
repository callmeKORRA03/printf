#include "main.h"
#include <unistd.h>
/**
 * _printhex - Entry to a function that prints out hexadecimal
 * @hex: retrives the value passed to it.
 * Return: Reutnrs hexadecimal value.
 */

void _printhex(unsigned int hexa)
{
	char hex_chars[] = "0123456789ABCDEF";
	char hex[10];
	int index = 0;

	if (hexa == 0)
	{
		_putchar('0');
		return;
	}

	while (hexa != 0)
	{
		hex[index++] = hex_chars[hexa % 16];
		hexa /= 16;

		for (int i = index - 1; i >= 0; i--)
			_putchar(hex[i]);
	}
}
