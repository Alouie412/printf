#include "holberton.h"
/**
 *count_digits - counts the number of digits in the number
 *
 * @a: the integer of which digits will be counted
 *
 * Return: Recursively returns no. of digits
 */
int count_digits(unsigned int a, unsigned int b)
{
	if (a < b)
		return (1);

	return (1 + count_digits(a / b));
}
/**
 *num_converter - converts numbers into a string
 *
 * @a: integer passed for conversion
 * @b: base of the number passed
 *
 * Return: Pointer to the address of string created
 */
char *num_converter(unsigned int a, unsigned int b)
{
	char *ptr = NULL;
	int count;

	count = count_digits(a, b);

	ptr = malloc(count * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	ptr[count] = '\0';
	for (count -= 1; count >= 0; count--)
	{
		ptr[count] = a % b;
		a /= b;
	}

	return (ptr);
}
