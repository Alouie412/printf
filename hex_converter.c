#include "holberton.h"

/**
 * hex_converter - Converts numbers into a hexadecimal string
 * @a: Integer passed for conversion
 * @b: Base being passed in. In other words, 16
 * @ltr: Holds either x or X to determine uppercase or lowercase letters
 * Return: The number of characters printed
 */
char *hex_converter(unsigned int a, unsigned int *b, char ltr)
{
	char *ptr = NULL;
	int count;
	char low_array[] = "0123456789abcdef";
	char high_array[] = "0123456789ABCDEF";

	count = count_digits(a, b);
	ptr = malloc(count * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	ptr[count] = '\0';

	for (count--; count >= 0; count--)
	{
		if (ltr == 'x')
		{
			ptr[count] = low_array[a % *b] - '0';
		}
		else if (ltr == 'X')
			ptr[count] = high_array[a % *b] - '0';
		a /= *b;
	}

	return (ptr);
}
