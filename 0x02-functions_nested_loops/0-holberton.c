#include <stdio.h>
#include "main.h"
/**
 *This prints Holberton followed by new line.
 *Return: it returns 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int i;
	for(i=0; i<10; i++){
		_putchar(c[i]);
	}
	_putchar('\n');
	return(0);
}
