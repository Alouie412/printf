#include "holberton.h"

char *hex_converter(unsigned int a, unsigned int *b, char ltr)
{
	char *ptr = NULL;
	int count;
	static char low_array[] = "0123456789abcdef";
	static char high_array[] = "0123456789ABCDEF";

	(void)b;

	count = count_digits(a, b);
	ptr = malloc(count * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	ptr[count] = '\0';

	for (count--; count >= 0; count--)
	{
		if (ltr == 'x')
		  {
			ptr[count] = low_array[a % 16] - '0';
		  }
		else if (ltr == 'X')
			ptr[count] = high_array[a % 16] - '0';
		a /= 16;
	}

	return (ptr);
}
