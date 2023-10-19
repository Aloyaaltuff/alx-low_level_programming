#include "lists.h"

/**
 * print_list - function prints all the elements.`
 * @str: pointer
 * Return: 0 if str is NULL
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * _strlen - return the length of a string
 * @s: the string whose length to chekk
 *
 * Return: integer length of string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

