#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: double pointer to double linked list
 */
void insertion_sort_list(listint_t **list)
{
	while (*list != NULL)
	{
		while (((*list)->prev != NULL) &&
		       (((*list)->next->n) < ((*list)->prev->n)))
		{
			*list = (*list)->prev;
		}
		*list = (*list)->next;
	}
}
