#include "sort.h"

/**
 *selection_sort - Sorts an array of integers using
 *the selection sort algorithm
 *
 *@array: The array
 *@size: The size of array
 */
void selection_sort(int *array, size_t size)
{
	int min, temp;
	unsigned int i, j = 0;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (array[i] != array[min])
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
