#include "lists.h"

/**
  * reverse_listint -  function that reverses a listint_t linked list.
  * @head: a pointer to address of head
  *
  * Return: a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head)->next = prev;

	return (*head);
}
