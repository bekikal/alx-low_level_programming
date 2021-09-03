#include "main.h"

/**
 *-isupper - checks upper or lower.
 *@c: the character to be checked.
 *
 *Return: returns 1 if' c'is upper cause if not returns 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
