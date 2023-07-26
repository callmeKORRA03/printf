#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printHex - A function to print hexadecimal (uppercase)
 * @args: Argument list from parent _printf function call
 * @upper: For testing character case,
 * may later be useful for width and other flags
 * Return: Return number of characters successfully printed
 */

int _printHex(va_list args, char *upper)
{
	int print_count = 0;
	unsigned int num;
	char hex_digits_upper[] = "0123456789ABCDEF";

	(void)upper;

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
		hex_buf[index] = hex_digits_upper[num % 16];
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
