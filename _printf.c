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
	int count = 0, i;
	va_list args;

	functionstruct arrayStructFunction[5] = {
		{'c', _putchar}, {'s', _putstring}, {'d', _printint}, {'i', _printint},
		{'u', _printint}};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				write(1, "%", 1), count++;
			else if (*format == ' ' || *format == '\0')
			{
				return (-1);
			}
			else
			{
				for (i = 0; i < 5; i++)
				{
					if (arrayStructFunction[i].c == *format)
						count += arrayStructFunction[i].fpointer(args, (char *)format);
				}
			}
			format++;
		}
		else
			write(1, format, 1);
		count++, format++;
	}
	va_end(args);
	return (count);
}
