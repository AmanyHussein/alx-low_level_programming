#include"lists.h"
/**
  * add_nodeint_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node-> next = NULL;
	if(*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current_node = *head;
	while(current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;
	return (*head);
}
