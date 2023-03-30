#include<stdio.h>
#include"lists.h"

/**
 * size_t print_list- see description
 * @list_t *h :singly linked list node
 * description: prints all the elements of a list_t list.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while(current != NULL)
	{
		if(current->str == NULL)
		{
			printf("[0] (nil)\n");
			current = current-> next;
			i++;
		}
		else
		{
			printf("[%d]", current->len);
			printf("%s\n", current->str);
			current = current->next;
			i++;
		}
	}

	return (i);

}

