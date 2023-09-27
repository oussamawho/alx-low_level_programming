#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = 0;
listint_t *next = 0;
for (; *head; *head = next)
{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
}
*head = prev;
return (*head);
}
