#include "holberton.h"

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
