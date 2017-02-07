#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: double pointer to double linked list
 */
void insertion_sort_list(listint_t **list)
{
	while ((*list)->next != NULL)
	{
		printf("**%d\n", (*list)->n);
		while (((*list)->prev != NULL) &&
		       (((*list)->n) < ((*list)->prev->n)))
		{
			/*swap current node with prev node*/
			printf("1 in the loop = %d\n", (*list)->n);
			/*print_list(*list);*/

		}
		*list = (*list)->next;
	}
}
