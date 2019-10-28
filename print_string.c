#include "holberton.h"

int print_string(va_list arg, int *in_length)
{
	int i;
	char *string;

	string = va_arg(arg, char *);

	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}

	*in_length += i;

	return (*in_length);
}
