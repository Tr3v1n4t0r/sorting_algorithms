#include "sort.h"
/**
 *shell_sort - function to sort an array of integers in ascending order
 * using the Knuth sequence
 *@array: The array to sort
 *@size: The size of array
  */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, gap;

	if (array && size > 1)
	{
		gap = 1;
		while (gap <= size / 3)
			gap = gap * 3 + 1;

		while (gap > 0)
		{
			for (j = gap; j < size; j++)
			{
				temp = array[j];
				i = j;
				for (; i >= gap - 1 && array[i - gap] >= temp;
				     i -= gap)
					array[i] = array[i - gap];
				array[i] = temp;
			}
			gap = (gap - 1) / 3;
			print_array(array, size);
		}
	}
}
