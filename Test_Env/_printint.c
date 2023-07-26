#include <unistd.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
* _printint - A function that receives an integer and prints
* it out, one character at a time. Both positive and negative
* @args: Argument list passed from main function
* @str: Format string to confirm current format specifier
* Return: (counter) - returns the number of characters printed
*/
/**
* @args: Argument list passed from main function
* @str: Format string to confirm current format specifier
* Return: (counter) - returns the number of characters printed
*/

int _printint(va_list args, char *str)
{
	int num, counter = 0, index = 0;
	char ch = '-', buff[11];
	unsigned int positiveNum;

	(void)str;

	num = va_arg(args, int);

	if ((num + 1) == 1)
		return (write(1, "0", 1));

	if (num < 0)
		counter += write(1, &ch, 1);

	if (num < INT_MIN || num >= INT_MIN || num >= INT_MAX)
		convert_negative(&positiveNum, num);

	while (positiveNum)
	{
		buff[index] = (positiveNum % 10) + '0';
		positiveNum /= 10;
		index++;
	}
	print_buffer_int(buff, index, &counter);
	return (counter);
}

/**
 * convert_negative - converts a negative number to positive
 * @positiveNum: Pointer to positive number to be converted
 * @retrieved_number: number that's retrieved
 */

void convert_negative(unsigned int *positiveNum, int retrieved_number)
{
	if (retrieved_number <= INT_MIN)
		*positiveNum = 2147483648;

	if (retrieved_number >= INT_MAX)
		*positiveNum = 2147483647;
	else
	{
		*positiveNum = abs(retrieved_number);
	}
}

/**
 * print_buffer_int - prints the characters in buffer
 * @buff: character array to be printed
 * @index: Index of the last element on the array
 * @counter: Pointer to the counter variable in main function
 */

void print_buffer_int(char buff[11], int index, int *counter)
{
	int i = 0;

	for (i = (index - 1); i >= 0; i--)
	{
		write(1, &buff[i], 1);
		(*counter)++;
	}
}
