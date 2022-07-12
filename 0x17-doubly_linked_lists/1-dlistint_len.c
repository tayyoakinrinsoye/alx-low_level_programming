#include "lists.h"

/**
 * dlistint_len: count and return number of element in a dlistint_t list.
 * @h: pointer to head of the list
 * Return: numbers of nodes in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int size;

	size = 0;

	if (h == NULL)
	return (size);

	while (h != NULL)
	{
	h = h->next;
	size++;
	}
	return (size);
}
