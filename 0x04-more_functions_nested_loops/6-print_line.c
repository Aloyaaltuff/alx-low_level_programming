#include "main.h"

/**
 * print_line - print line
 *
 * @n: is the number of times the _ character
 *
*/

void print_line(int n)
{
	int lnchr;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}
