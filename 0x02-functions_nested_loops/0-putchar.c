#include "main.h"

/**
 * main - Entrey point
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: Always 0 (succsess)
 *
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
