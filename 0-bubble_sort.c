#include "sort.h"

/**
 *bubble_sort - Sorts an array of integers using bubble sorting
 *
 *@array: The array
 *@size: The size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int swap, temp;

	if (!array)
		return;

	do{
		swap = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
	}while (swap);
}
