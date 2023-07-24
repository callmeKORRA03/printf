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

	functionstruct arrayStructFunction[7] = {
		{'c', _putchar}, {'s', _putstring}, {'d', _printint}, {'i', _printint},
		{'u', _printint}, {'b', _printbinary}, {'%', _printpercent}};
	va_start(args, format);

	while (*format)
	{
		if (!format || (*format == '%' && !(*(format + 1))) ||
			(*format == '%' && *(format + 1) == ' ' && !(*(format + 2))))
			return (-1);
		if (*format == '%')
		{
			format++;
			for (i = 0; i < 7; i++)
			{
				if (arrayStructFunction[i].c == *format)
					count += arrayStructFunction[i].fpointer(args, (char *)format);
			}
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
