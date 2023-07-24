#include <unistd.h>
#include "main.h"

/**
 * _putstring - A function used to return a string
 * @args: Argument list from parent _printf function call
 * @str: for testing character case - may later be useful
 * for width and other flags
 * Return: Return number of characters sucessfully printed
 */

int _putstring(va_list args, char *str)
{
	int print_count = 0;
	char *retrieve_string = va_arg(args, char *);

	(void)str;

	if (retrieve_string == NULL)
	{
		return (write(1, "(null)", 6));
	}

	while (*retrieve_string)
	{
		write(1, retrieve_string, 1);
		retrieve_string++;
		print_count++;
	}
	return (print_count);
}
