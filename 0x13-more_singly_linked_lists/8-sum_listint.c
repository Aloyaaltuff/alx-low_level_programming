#include "lists.h"
/**
 * sum_listint - return the sum of all data
 * @head: pointer
 *
 * Return: if list is empty 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
