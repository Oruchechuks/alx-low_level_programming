#include "main.h"

/**
 * _puts - Prints a strin.
 * @str: string.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
