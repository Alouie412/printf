#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
  int len, len2;
  unsigned int ui;

  ui = (unsigned int)INT_MAX + 1024;

  printf("Testing printf\n");
  len = printf("%%, %s, %c, awesome, %d, %i\n", "Hello Holberton", 'h', ui, -525600);

  printf("Testing _printf\n");
  len2 = _printf("%%, %s, %c, awesome, %d, %i\n", "Hello Holberton", 'h', ui, -525600);

  printf("Printf. len: %d, len2: %i\n", len, len2);

  _printf("_Printf. len2: %d, len: %i\n", len2, len);

  return (0);
}
