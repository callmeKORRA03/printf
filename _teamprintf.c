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
	int count; /* used to return number of characters */
	va_list args;

	count = 0;
	va_start(args, format);

	while (*format == '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case '%':
                                        {
                                                count += _putchar('%');

                                                break;
                                        }
				case 'c':
					{
						char character = (char)va_arg(args, int);

						count += _putchar(character);
						break;
					}
				case 's':
					{
						char *string = va_arg(args, char *);

						count += _putstring(string);
						break;
					}
				case 'd':
				case 'i':
					{
						int num = va_arg(args, int);

						count += _printint(num);
						break;
					}
			default:
					count += _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}
