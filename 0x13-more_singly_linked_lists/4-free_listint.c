#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	for (; head; head = x)
{
	x = head->next;
	free(head);
}
}
