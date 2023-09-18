#include "main.h"

/**
 * strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int strlen(char *s)
{
	char *s = "my first strlen!";
	int len;

	len = strlen(*s);
	printf("strlen(*s) : %d\n", len);
	return (0);
}
