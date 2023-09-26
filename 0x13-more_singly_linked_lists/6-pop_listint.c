#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer
 * Return: the data inside the elements that was deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;
if (!head || !*head)
return (0);
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (x);
}
