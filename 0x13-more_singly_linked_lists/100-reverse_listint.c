#include "lists.h"
/**
  * reverse_listint reverse a linked list
  * @head: pointer to the first node in the list
  * Return : a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_before = NULL;
	listint_t *node_after = NULL;
	while (*head)
	{
		node_after = (*head)->next;
		(*head)->next = node_before;
		node_before = *head;
		*head = node_after;
	}
	*head = node_before;
	return (*head);
}
