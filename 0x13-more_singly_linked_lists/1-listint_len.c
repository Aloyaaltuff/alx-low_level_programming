#include "lists.h"

/**
 * listint_len - function return the number of element
 *@h: pointer to first node
 *
 * Return: size of list
*/
size_t listint_len(const listint_t *h)
{
	size_t it = 0;

	while (h)
	{
		h = h->next;
		it++;
	}
	return (it);
}
