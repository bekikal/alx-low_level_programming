#include "main.h"

/**
 *0-isupper.c: checks upper or lower.
 *Return:  _isupper(c) returns 1 if' c'is upper cause if not returns 0.
 */
int _isupper(int c)
{
	 if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
