#include "holberton.h"

int count_digits(unsigned int a)
{
	if (a < 10)
		return (1);

	return (1 + count_digits(a / 10));
}

char *num_converter(unsigned int a, int b)
{
	char *ptr = NULL;
	int count;

	count = count_digits(a);

	ptr = malloc(count * sizeof(char));

	if (ptr == NULL)
		return NULL;

	ptr[count] = '\0';
	for (count -= 1; count >= 0; count--)
	{
		ptr[count] = a % b;
		a /= b;	
	}

	return (ptr);
}
