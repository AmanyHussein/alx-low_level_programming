#include"lists.h"
/**
  * sum_listint - sums all elements of a list
  * @head: pointer to the head of the list
  * Return: sum of all elements
  */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum = 0;

	current_node = head;
	if(current_node == NULL)
		return (0);
	while(current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	
	return (sum);
}
