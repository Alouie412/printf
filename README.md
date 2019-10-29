# _printf()

printf() is a function which allows the user to produce output based on a specific format.

## Description

The described _printf() function produces an output format based on the identifiers that are listed below. When the function is successful, it returns the length of the string passed, and returns (-1) when the function fails.

Format identifiers:

- %c: Prints a character
- %s: Prints a string
- %d: Prints integers
- %i: Prints integers
- %b: Prints the binary representation of the unsigned decimal
- %u: Prints integers that are unsigned
- %x: Prints lowercase hexadecimal 
- %X: Prints uppercase hexadecimal
- %r: Prints a reversed string
- %R: Prints the passed string in Rot13.

## Usage

- All the files are to be compiled on Ubuntu 14.04 LTS
- Compile your code with ```gcc -Wall -Werror -Wextra -pedantic *.c```
- Include the ```"holberton.h"``` header file on the functions using the ```_printf()```

## Example
```
#include "holberton.h"
#include <limits.h>

int main(void)
{
  int len;

  len = _printf("%c, %s, %%, %z, % , awesome, %d, %i, %o, %b, %r, %R\n", 'h', "Hello you", 525600, -525600, 32767, 4242, "He\
  llo Holberton", "Hello Holberton");

  _printf("Len: %d\n", len);

  return 0;
}
```

#### Output:
```
h, Hello you, %, %z, % , awesome, 525600, -525600, 77777, 1000010010010, notrebloH olleH, Uryyb Ubyoregba
Len: 106

```
