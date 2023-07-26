#include "main.h"

/**
 * _putchar -Prints a character and returns
 * an integer (1) per call
 * @args: Argument list passed from main function
 * @str: Format string to confirm current format specifier
 * Return: (counter) - returns the number of characters printed
 */

int _putchar(va_list args, char *str)
{
	int counter = 0;
	char retrieve_char = va_arg(args, int);

	(void)str;

	write(1, &retrieve_char, 1);
	counter++;

	return (counter);
}
