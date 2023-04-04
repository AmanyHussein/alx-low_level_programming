#include"lists.h"
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current_node, *new_node, *temp;

	current_node = *head;
	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = current_node;
		*head = new_node;
		return (*head);
	}

	while(i != idx)
	{
		current_node = current_node->next;
		i++;
		if(!current_node)
		{
			free(new_node);
			return (NULL);
		}
	}

	if( i == idx)
	{
		temp->n = current_node->n;
		temp->next = (current_node->next);
		current_node->n = n;
		current_node->next = current_node->next;
		new_node-> n = temp->n;
		new_node->next = current_node;
	}


	return (current_node);
}
