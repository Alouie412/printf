#include "holberton.h"

int switch_statement(va_list arg, char symbol, int in_length)
{
	switch (symbol)
	{
		case 'c':
			print_char(arg, &in_length);
			break;
		case 's':
			print_string(arg, &in_length);
			break;
		case 'd':
		case 'i':
			print_num(arg, &in_length, symbol);
			break;

		default: 
			_putchar('%');
			_putchar(symbol);
			in_length++;
	}
    return (in_length);
}
