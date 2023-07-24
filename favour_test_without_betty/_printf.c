#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function to print char, string, and handle %
 * @format: A variable that is used to change the condition of the file
 * @...: Variable list of arguments
 * Return: Always count of the argument
 */
int _printf(const char *format, ...)
{
    int count = 0, i;
    va_list args;

    functionstruct arrayStructFunction[6] = {
        {'c', _putchar}, {'s', _putstring}, {'d', _printint},
        {'i', _printint}, {'u', _printint}, {'%', _printpercent}};
    
    va_start(args, format);
    if (format == NULL)
        return (-1);
    
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '%')
            {
                write(1, "%", 1);
                count++, format++;
            }
            else if (*format == ' ' || *format == '\0')
            {
                return (-1);
            }
            else if (*(format + 1) == '\0')
            {
                return (-1);
            }
            else
            {
                for (i = 0; i < 6; i++)
                {
                    if (arrayStructFunction[i].c == *format)
                    {
                        count += arrayStructFunction[i].fpointer(args, (char *)format);
                        break;
                    }
                }
                format++;
            }
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
