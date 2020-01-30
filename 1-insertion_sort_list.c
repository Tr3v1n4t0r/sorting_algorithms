#include "sort.h"

/**
 *insertion_sort_list - Sorts a doubly linked list of integers
 *using the insertion sort algorithm
 *
 *@list: The linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node;

	if (!list || !*list || !(*list)->next)
		return;

	current = next_node = (*list)->next;

	while (next_node)
	{
		next_node = next_node->next;

		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			print_list(*list);
		}
		current = next_node;
	}


}
