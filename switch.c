#include "holberton.h"

/**
 * switch_statement - Helper function that holds the switch statement
 * and calls certain functions depending on the symbol
 * @arg: va_list passed in from printf.c
 * @symbol: The letter passed in from printf.c
 * @in_length: Variable that holds the number of char printed
 * Return: The number of characters printed
 */
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
	}
    return (in_length);
}
