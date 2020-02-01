#include "sort.h"
/**
 *quick_sort - Sorts an array of integers using the quick sort algorithm
 *@array: The array to sort
 *@size: The size of array
 */
void quick_sort(int *array, size_t size)
{
	int high = size - 1;

	if (size < 2)
		return;

	lomuto_part(array, 0, high, size);
}
/**
 *lomuto_part - implements the lomuto partition algorithm on the array
 *@array: The array to partition
 *@low: the lower integer to compare
 *@high: the higher integer/limit to compare
 *@size: The size of array
 */
void lomuto_part(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = sort(array, size, low, high);
		lomuto_part(array, low, pivot - 1, size);
		lomuto_part(array, pivot + 1, high, size);
	}
}
/**
 *swap - swaps our two values in our array
 *@array: The array
 *@a: first integer to swap
 *@b: second integr to swap
 *@size: The size of array
 */
void swap(int *array, int *a, int *b, size_t size)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	print_array(array, size);
}
/**
 *sort - Function to sort 2 values if conditions are satisfied
 *@array: The array to sort
 *@size: The size of array
 *@low: low integer
 *@high: high integer/limit
 *Return: index of swap
 */
int sort(int *array, size_t size, int low, int high)
{
	int pivot = array[high], index = low, i;

	for (i = low; i < high; i++)
	{
		if (array[i] < pivot)
		{
			if (i != index && array[i] != array[index])
				swap(array, &array[i], &array[index], size);
			index++;
		}
	}
	if (high != index && array[high] != array[index])
		swap(array, &array[high], &array[index], size);

	return (index);
}
