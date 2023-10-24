#include "lists.h"
/**
 * add_nodeint_end - adds node to the end
 * @head: pointer to first node
 * @n: value of new node
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	if (!*head)
		*head = newnode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newnode;
	}
	return (newnode);
}
