#include "main.h"
#include <string.h>

/**
 *_put - print a string
 *
 * @str: string input
 *
 * Return: 0
*/

void _put(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++
	}
	_putchar('\n');
