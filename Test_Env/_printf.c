#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - A function to print char, string and hanle %
 * @format: A varible that is used to chnage the condition of the file
 * @...: Variable list of arguments
 * Return: Always count of the argument
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	if ((format == NULL) || (format[0] == '%' && format[1] == '\0') ||
			(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				write(1, "%", 1), count++;
			else
				handleformatprint1(&count, (char *)format, args);
			format++;
		}
		else
		{
			write(1, format, 1);
			count++, format++;
		}
	}
	va_end(args);
	return (count);
}

/**
 * handleformatprint1 - A subfunction handling format specificier print
 * @count: Pointer to count variable in parent function
 * @format: Pointer to first chaacter being format string
 * @args: Argument list being passed from parent function
 */

void handleformatprint1(int *count, char *format, va_list args)
{
	char *f = format;
	int i = 0;

	functionstruct arrayStructFunction[6] = {
		{'c', _putchar}, {'s', _putstring}, {'d', _printint},
		{'i', _printint}, {'u', _printint}, {'b', _printbinary}};

	if (*f == 'd' || *f == 'i' || *f == 's' || *f == 'c' || *f == 'b'
			|| *f == 'u')
	{
		for (i = 0; i < 6; i++)
		{
			if (arrayStructFunction[i].c == *f)
				*count += arrayStructFunction[i].fpointer(args, format);
		}
	}
	else if (*f == '%')
	{
		format++;
	}
	else
	{
		write(1, "%", 1);
		write(1, format, 1);
		*count += 2;
	}
}
