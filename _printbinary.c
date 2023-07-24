#include <unistd.h>
#include "main.h"
/**
 * _printbinary - A function that receives an integer and prints
 * it out, one character at a time. Both positive and negative
 * @args: Argument list passed from main function
 * @str: Format string to confirm current format specifier
 * Return: (counter) - returns the number of characters printed
 */

int _printbinary(va_list args, char *str)
{
	int num, i, counter, index;
	char buff[20];

	counter = 0, index = 0;

	(void)str;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num)
	{
		buff[index] = (num % 2) + '0';
		num /= 2, index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		write(1, &buff[i], 1);
		counter++;
	}

	return (counter);
}
