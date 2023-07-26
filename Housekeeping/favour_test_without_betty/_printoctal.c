#include <unistd.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * _printoctal - A function to print octal values.
 * @args: Argument list from parent _printf function call
 * @oct: For testing character case
 * may later be useful for width and other flags
 * Return: Return number of characters successfully printed
 */
int _printoctal(va_list args, char *oct)
{
	int print_count = 0;
	unsigned int num;
	char oct_digits[] = "01234567";

	(void)oct;

	num = va_arg(args, unsigned int);

	char oct_buf[20];
	int index = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num)
	{
		oct_buf[index] = oct_digits[num % 8];
		num /= 8;
		index++;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		write(1, &oct_buf[i], 1);
		print_count++;
	}

	return (print_count);
}
