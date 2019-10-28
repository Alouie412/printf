#include "holberton.h"
/**
 *_printChar - function to 
 *
 * @args: list of arguments
 *
 * Return: Returns the input string length
 */
int print_char(va_list args, int *inlength)
{	
	char a;
	a = va_arg(args, int);

	_putchar(a);
	*inlength += 1;
	return(*inlength);
}
