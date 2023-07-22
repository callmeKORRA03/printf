#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - A function to print char, string and hanle %
 * @format: A varible that is used to chnage the condition of the file
 * Return: Always count of the argument
 */
int _printf(const char *format, ...)
{
	int count = 0, num;
	char character, *string;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case '%':
				count += _putchar('%');
				break;
			case 'c':
				character = (char)va_arg(args, int);
				count += _putchar(character);
				break;
			case 's':
				string = va_arg(args, char *);
				count += _putstring(string);
				break;
			case 'd':
			case 'i':
				num = va_arg(args, int);
				if (num == 0)
					count += _putchar('0');
				else
					count += _printint(num);
				break;
			}
			format++;
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
