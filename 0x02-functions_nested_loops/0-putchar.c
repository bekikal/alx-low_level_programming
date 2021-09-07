#include <stdio.h>
#include "main.h"

/**
 *main - call the _putchar() function.
 *_putchar -  prints _putchart followed by new line.
 *c : character to be char.
 *Return: it returns 0
 */
int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
