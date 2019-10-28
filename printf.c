#include "holberton.h"
/**
 *_printf - prints a string to stdout
 *
 * @format: string that is passed with specifiers
 *
 * Return: Returns length of string
 */
int _printf(const char *format, ...)
{
	int i, in_length = 0;
	va_list arg_list;

	va_start(arg_list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			in_length = switch_statement(arg_list, format[i + 1], in_length);
			i++;
		}
		else
		{
			_putchar(format[i]);
			in_length++;
		}
	}
	va_end(arg_list);
	return (in_length);
}
