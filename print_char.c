#include "holberton.h"

/**
 * print_char - Helper function that prints a character
 * @args: list of arguments
 * @inlength: Variable that holds the number of char printed
 * Return: Returns the input string length
 */
int print_char(va_list args, int *inlength)
{
	char a;

	a = va_arg(args, int);

	_putchar(a);
	*inlength += 1;
	return (*inlength);
}
