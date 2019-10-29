#include "holberton.h"

void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	while (s[i] != '\0')
	i++;

	i--;

	for (j = 0; j <= i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

char *rot13(char *str)
{
	char regALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char altALPHA[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; regALPHA[j] != '\0'; j++)
		{
			if (str[i] == regALPHA[j])
			{
				str[i] = altALPHA[j];
				break;
			}
		}
	}
	return (str);
}

/**
 * print_string - Helper function that prints a string
 * @arg: va_list passed in from printf.c
 * @in_length: Variable that holds the number of char printed
 * Return: The number of characters printed in this function
 */
int print_string(va_list arg, int *in_length, char ltr)
{
	int i;
	char *string;

	string = va_arg(arg, char *);

	if (ltr == 'r')
		rev_string(string);
	else if (ltr == 'R')
		rot13(string);

	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}

	*in_length += i;

	return (*in_length);
}
