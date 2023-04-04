#include"lists.h"
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	temp = *head;
	if(temp == NULL)
		return (0);

	if(*head)
	{
		n = temp->n;
		*head = temp->next;
		free(temp);
	}
	else 
		n = 0;
	return (n);
}
