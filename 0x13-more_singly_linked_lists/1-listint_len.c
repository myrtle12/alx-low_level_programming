#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list
 * @h: head of the linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
