#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len1, len1b, len2, len2b;

	/*
		int num1, num2;

		num1 = _printf("A %s sentence\n", "simple");
		num2 = printf("A %s sentence\n", "simple");
	   _printf("Len:[%d]\n", num1);
		printf("Len1:[%d]\n\n", num2);

		num1 = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
		num2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
		_printf("Len:[%d]\n", num1);
		printf("Len1:[%d]\n\n", num2);

		num1 = _printf("A simple %v ntence\n");
		num2 = printf("A simple %v ntence\n");
		_printf("Len:[%d]\n", num1);
		printf("Len1:[%d]\n\n", num2);

		_printf("%d%%%c%s%i\n", 150, 'H', "Justification\n", 1567887);
		_printf("%d\n", INT_MIN);
	   printf("%d\n", INT_MIN);
	   _printf("%d\n", -500);

		num1 = _printf("Percentage: %%\n");
		num2 = printf("Percentage: %%\n");
	 _printf("Len:[%d]\n", num1);
		printf("Len1:[%d]\n\n", num2);
		*/

	printf("Default print: %d\n", 65176);
	_printf("Our own print: %d\n", 65176);
	_printf("Our own print: %d\n", 2147483600);

	printf("%d\n", -777765176);
	_printf("%d\n", -777765176);

	printf("%d\n", 00002);
	_printf("%d\n", 00002);

	printf("%d\n", 0);
	_printf("%d\n", 0);

	printf("%d\n", 7);
	_printf("%d\n", 7);

	printf("%d\n", -2255445);
	_printf("%d\n", -2255445);

	len1 = printf("Maximum value of int: %d\n", INT_MAX);
	len1b = _printf("Maximum value of int: %d\n", INT_MAX);

	len2 = printf("Minimum value of int: %d\n", INT_MIN);
	len2b = _printf("Minimum value of int: %d\n", INT_MIN);

	printf("len1: %d\t len1b: %d\n", len1, len1b);
	printf("len2: %d\t len2b: %d\n", len2, len2b);
	printf("--------------------------------\n");

	printf("%i\n", 65176);
	_printf("%i\n", 65176);
	printf("%i\n", 0);
	_printf("%i\n", 0);
	printf("%i\n", -2255445);
	_printf("%i\n", -2255445);
	printf("Maximum value of int: %i\n", INT_MAX);
	_printf("Maximum value of int: %i\n", INT_MAX);
	printf("Minimum value of int: %i\n", INT_MIN);
	_printf("Minimum value of int: %i\n", INT_MIN);

	return (0);
}

