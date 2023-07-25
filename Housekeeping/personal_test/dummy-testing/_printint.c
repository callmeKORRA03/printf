#include <unistd.h>
#include "main.h"
/**
 * _printint - A function that receives an integer and prints
 * it out, one character at a time. Both positive and negative
 * @args: Argument list passed from main function
 * @str: Format string to confirm current format specifier
 * Return: (counter) - returns the number of characters printed
 */

int _printint(va_list args, char *str)
{
	int num, i, counter, index;
	char ch = '-', buff[20];

	counter = 0, index = 0;

	(void)str;

	num = va_arg(args, int);

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (num < 0)
	{
		write(1, &ch, 1), num = -num;
		counter++;
	}

	while (num)
	{
		buff[index] = (num % 10) + '0';
		num /= 10, index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		write(1, &buff[i], 1);
		counter++;
	}

	return (counter);
}
