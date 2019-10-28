#include "holberton.h"
/**
 *_printChar - function to 
 *
 * @args: list of arguments
 *
 * Return: Returns the input string length
 */
int _printChar(va_list args, int *inlength)
{	
	char a;
	a = va_arg(args, int);

	_putchar(a);
	return(++*inlength);
}
