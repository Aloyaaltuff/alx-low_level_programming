#include "lists.h"

/**
 * print_listint - function print linked lists
 * @h: pointer to first node
 *
 * Return: size of list
*/
size_t print_listint(const listint_t *h)
{
	size_t it = 0;

	while (h)
	{
		printf("%d", h->n);
		it++;
	}
	return (it);
}
