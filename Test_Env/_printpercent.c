#include "main.h"

/**
 * _printpercent -Prints a percent character and returns
 * an integer (1) per call
 * @args: Argument list passed from main function
 * @str: Format string to confirm current format specifier
 * Return: (counter) - returns the number of characters printed
 */

int _printpercent(va_list args, char *str)
{
	int counter = 0;
	(void)str;
	(void)args;

	write(1, "%", 1);
	counter++;

	return (counter);

}
