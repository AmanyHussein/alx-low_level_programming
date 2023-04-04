#include"lists.h"
/**
  * delete_nodeint_at_index - delete a node at index
  * @head: head of the list
  * @index: location of the node to delete
  * Return: pointer to head of list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *following_node;

	if (!head || !*head)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
	}
	following_node = current_node->next;
	current_node->next = following_node->next;
	free(following_node);
	return (1);
}
