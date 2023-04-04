#include"lists.h"
/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current_node;

	if (head == NULL)
		return;
	current_node = *head;
	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}
	*head = NULL;
}
