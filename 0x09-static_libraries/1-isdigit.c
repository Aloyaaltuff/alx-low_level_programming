#include"main.h"

/**
 * _isdigit - check for digit
 *
 * @c: input for digit
 *
 * Return: 1 if digit, if not 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
