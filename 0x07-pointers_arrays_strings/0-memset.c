#include "main.h"

/** *_memset - function that fills memory with constant byte
 * @s: pointer to put the constsnt
 * @b: constsnt
 * @n: max byte to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	
	return (s);
}
