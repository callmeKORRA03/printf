#include <unistd.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * _printbinary - A function that receives an integer and prints
 * it out, in binary form
 * @args: Argument list passed from main function
 * @str: Format string to confirm current format specifier
 * Return: (counter) - returns the number of characters printed
 */

int _printbinary(va_list args, char *str)
{
	int counter = 0, index = 0;
	char buff[56];
	unsigned int positiveNum;

	(void)str;

	positiveNum = va_arg(args, unsigned int);

	if (positiveNum >= UINT_MAX)
		positiveNum = 4294967295;

	if ((positiveNum + 1) == 1)
	{
		write(1, "0", 1);
		counter += 1;
		return (counter);
	}
	else
	{
		while (positiveNum)
		{
			buff[index] = (positiveNum % 2) + '0';
			positiveNum /= 2;
			index++;
		}
		print_buffer_int(buff, index, &counter);
		return (counter);
	}
}
