#ifndef MAIN_H
#define MAIN_H
/*Include standard header files*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/*Struct Definition for Function Pointers*/
/**
 * functionstruct - A struct that holds a character key
 * mapped to a function pointer. Simulating key-value pair
 * @c - Character serving as format specifer checker
 * @fpointer: Pointer to specific function that receives
 * a string and an arguments list
 */
typedef struct functionstruct
{
	const char c;
	int (*fpointer)(va_list, char *);
} functionstruct;
/* Helper Function prototypes */
int _putchar(va_list, char *);
int _putstring(va_list, char *);
int _printint(va_list, char *);
int _printpercent(va_list, char *);
int _printbinary(va_list, char *str);
int _printoctal(va_list args, char *oct);
int _printhex(va_list args, char *lower);
int _printHex(va_list args, char *upper);
void handleformatprint1(int *, char *, va_list);
int _printbinary(va_list args, char *str);
void convert_negative(unsigned int *positiveNum, int retrieved_number);
void print_buffer_int(char buff[11], int index, int *counter);

/*Main _printf Function Prototype*/
int _printf(const char *format, ...);
#endif /* MAIN_H */
