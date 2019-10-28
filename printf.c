#include "holberton.h"

int _printf(const char *format, ...)
{
	int i, in_length = 0;
	va_list arg_list;

	va_start(arg_list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			in_length++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
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
