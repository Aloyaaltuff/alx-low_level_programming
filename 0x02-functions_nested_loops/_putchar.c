#include <unistdio.h>
#include "main.h"

/**
 * _ putchar - writes the character c to stdout
 * @c:the caracter to print
 *
 * Return:on success 1.
 *      on error, -1 is returned, and errno is set appropriately.
*/
int _putcahr(char c)
{
	return (write(1, &c, 1));
}
