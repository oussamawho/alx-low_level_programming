#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *x;
if (head == NULL)
return;

	for (; *head; *head = x)
{
	x = (*head)->next;
	free(*head);
}
*head = NULL;
}
