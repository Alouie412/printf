#include "holberton.h"
/**
 *print_num - prints the number passed
 *
 * @arg: argument that is passed
 * @in_length: length of i/p string
 * @ltr: character of the format specifier
 *
 * Return: Returns string length
 */
int print_num(va_list arg, int *in_length, char ltr)
{
	int num, count;
	char *ptr;

	if (ltr == 'd' || ltr == 'i')
	{
		num = va_arg(arg, int);
		if (num < 0)
		{
			num *= -1;
			_putchar('-');
			*in_length += 1;
		}
		ptr = num_converter(num, 10);
	}

	if (ltr == 'b')
	{
		num = va_arg(arg, unsigned int)
		ptr = num_converter(num, 2);
	}
	else if (ltr == 'o' || ltr == 'x' || ltr == 'X' || ltr == 'u')
	{
		num = va_arg(arg, unsigned int);
		if (ltr == 'o')
			ptr = num_converter(num, 8);
	}

	count = count_digits(num);
	out_num(ptr, count, in_length);
	return (*in_length);
}
