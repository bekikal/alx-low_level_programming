#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, lastletter;

	while (s[len] != '\0')
	{
		len++;
	}
	for (lastletter = len - 1; lastletter >= 0; lastletter--)
	{
		_putchar(s[lastletter]);
	}
	_putchar('\n');
}
