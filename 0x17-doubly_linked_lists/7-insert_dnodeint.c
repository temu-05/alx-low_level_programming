#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to a listint_t struct
 * @idx: index where new node should be added
 * @n: n value of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len = 0;
	dlistint_t *address = NULL;
	unsigned int i = 0;
	dlistint_t  *newnode = NULL, *current = *h;

	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		address = add_dnodeint(h, n);
		return (address);
	}
	if (idx == len)
	{
		address = add_dnodeint_end(h, n);
		return (address);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	i = 0;
	while (i < idx - 1)
	{
		current = current->next;
		i++;
	}
	newnode->next = current->next;
	newnode->prev = current;
	current->next->prev = newnode;
	current->next = newnode;
	return (newnode);
}
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to a struct of type dlistint_t
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
