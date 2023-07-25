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
	/*int len = 13;
	int len2 = 1879;*/
	int len1, len2, len3, len4, len5, len6, len7, len8, len9, len10, len11, len12, len13;
	int len1b, len2b, len3b, len4b, len5b, len6b, len7b, len8b, len9b, len10b, len11b, len12b, len13b;

	char *project = "Custom Printf";
	char *notification = "Successfully printed";
	char grade = 'A';

	int signedInt = -42;
	unsigned int unsignedInt = 42;

	/* EXTRA TEST CASES*/

	len1 = _printf("Printing Unsigned Int [%s]: %i %i\n\n", "%i", 156799, 545565);
	len1b = printf("Printing Unsigned Int [%s]: %i %i\n\n", "%i", 156799, 545565);

	len2 = _printf("Printing Int [%s]: Arg 1: %d; Arg 2:%d%%\n\n", "%d", 156, 545);
	len2b = printf("Printing Int [%s]: Arg 1: %d; Arg 2:%d%%\n\n", "%d", 156, 545);

	len3 = _printf("Printing Int [%s]: %d\n\n", "%d", 15);
	len3b = printf("Printing Int [%s]: %d\n\n", "%d", 15);

	len4 = _printf("Printing String[%s]: %s\n", "%s", notification);
	len4b = printf("Printing String[%s]: %s\n", "%s", notification);

	len5 = _printf("Printing NULL as argument: %s\n", NULL);

	/*NORMAL PRINTF DOESN'T SEEM TO ACCEPT NULL AS AN ARGUMENT
	len5b = printf("Printing NULL as argument: %s\n", NULL);
	*/
	len5b = 0;

	len6 = _printf("Printing Character [%s]: %c\n\n", "%c", 'A');
	len6b = printf("Printing Character [%s]: %c\n\n", "%c", 'A');

	len7 = _printf("Printing %c\n", 'a');
	len7b = printf("Printing %c\n", 'a');
	write(1, "\n", 1);

	len8 = _printf("%i", 1057478);
	len8b = printf("%i", 1057478);
	write(1, "\n", 1);

	len9 = _printf("Project: %s || Expected Grade: %c \n", project, grade);
	len9b = printf("Project: %s || Expected Grade: %c \n", project, grade);
	write(1, "\n", 1);

	len10 = _printf("Double %%: %%\n");
	len10b = printf("Double %%: %%\n");

	len11 = _printf("Printing Signed Int[%s]: %d\n", "%d", signedInt);
	len11b = printf("Printing Signed Int[%s]: %d\n", "%d", signedInt);

	len12 = _printf("Printing Unsigned Int[%s]: %u\n", "%u", unsignedInt);
	len12b = printf("Printing Unsigned Int[%s]: %u\n", "%u", unsignedInt);

	len13 = _printf("Double %% with value: %% %c\n", 'X');
	len13b = printf("Double %% with value: %% %c\n", 'X');

	_printf("\nOUR FUNCTION'S RETURN VALUES\n");
	_printf("\n========================================================\n");
	_printf("Printing return values from above 12 cases of our own _printf:\n");
	_printf("%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d\n\n",
			len1, len2, len3, len4, len5, len6, len7, len8, len9, len10, len11, len12, len13);
	_printf("========================================================\n");

	printf("STANDARD LIBRARY'S FUNCTION RETURN VALUES\n");
	_printf("\n========================================================\n");
	_printf("Printing return values from above 12 cases stdio.h printf:\n");
	_printf("%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d\n\n",
			len1b, len2b, len3b, len4b, len5b, len6b, len7b, len8b, len9b, len10b, len11b, len12b, len13b);
	_printf("========================================================\n");
	/*
		len = _printf("Let's try to printf a simple sentence.\n");
	   len2 = printf("Let's try to printf a simple sentence.\n");

		*/
	_printf("Cases: %s %s \n", "This", "Coding");

	_printf("ALX Test Cases:\n");

	/*
	_printf("Length:[%d, %i]\n", len, len);

	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

*/

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
