#include "main.h"

/**
 * print_numbers - print numbers 0 - 9 only with two _putchar
 *
 * Return:Always 0
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
