#include"lists.h"
/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index: which node to stop at
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node;

	current_node = head;
	if(current_node == NULL)
		return (NULL);

	while(i != index)
	{
		current_node = current_node->next;
		i++;

	}
	if(current_node == NULL)
		return (NULL);
	else
		return (current_node);

}
