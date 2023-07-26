#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printhex - A function to print hexadecimal (lowercase)
 * @args: Argument list from parent _printf function call
 * @lower: For testing character case,
 * may later be useful for width and other flags
 * Return: Return number of characters successfully printed
 */

int _printhex(va_list args, char *lower)
{
	int print_count = 0;
	unsigned int num;
	char hex_digits_lower[] = "0123456789abcdef";

	(void)lower;

	num = va_arg(args, unsigned int);

	char hex_buf[20];
	int index = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num)
	{
		hex_buf[index] = hex_digits_lower[num % 16];
		num /= 16;
		index++;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		write(1, &hex_buf[i], 1);
		print_count++;
	}

	return (print_count);
}
