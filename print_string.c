#include "holberton.h"

/**
 * print_string - Helper function that prints a string
 * @arg: va_list passed in from printf.c
 * @in_length: Variable that holds the number of char printed
 * Return: The number of characters printed in this function
 */
int print_string(va_list arg, int *in_length)
{
	int i;
	char *string;

	string = va_arg(arg, char *);
	if (string == NULL)
		return (-1);
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}

	*in_length += i;

	return (*in_length);
}
