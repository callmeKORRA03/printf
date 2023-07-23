#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 13;
	int len2 = 1879;
	char *project = "PrintF Function";
	char grade = 'A';

	_putchar('d');
	_putchar('\n');
	_putstring("The String print outs works \n");

	_putchar('m');
	_putchar('\n');

	_printf("\n%d\n", len);

	_printf("%d", 10);
	_putchar('\n');

	_printf("Printing %i\n");
	_putchar('\n');

	_printf("%i", 1057478);
	_putchar('\n');

	_printf("Project: %s Expected Grade: %c \n", project, grade);
	_putchar('\n');

	_printf("Double %%: %%\n");
	_printf("Double %% with value: %% %c\n", 'X');

	/*len = _printf("Let's try to printf a simple sentence.\n");
   len2 = printf("Let's try to printf a simple sentence.\n");

	*/
	_printf("Cases: %s%s \n", "This", "Coding");

	_printf("ALX Test Cases:\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	/* Always remember to comment or un-comment based on functionalities that we have implemented before testing with the file
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	*/

	return (0);
}
