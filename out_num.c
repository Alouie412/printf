#include "holberton.h"

/**
 * out_num - Helper function that prints a number char array
 * @ptr: The number in char array format
 * @count: The number of indexes in ptr
 * @in_length: Variable that holds the number of char printed
 * Return: The number of characters printed in this function
 */
int out_num(char *ptr, int count, int *in_length)
{
	int j;

	for (j = 0; j < count; j++)
	{
		_putchar(ptr[j] + '0');
		*in_length += 1;
	}

	return (*in_length);
}
