#include"lists.h"
/**
 * size_t_print_listint - see description
 * @h- list struct
 * description - prints all the elements of a listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for(i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
