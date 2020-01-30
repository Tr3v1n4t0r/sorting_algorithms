#include "sort.h"

/**
 *bubble_sort - Sorts an array of integers using bubble sorting
 *
 *@array: The array
 *@size: The size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a = size - 1;
	int *temp = array;
	int *temp2 = temp++;
	int b;

	printf("temp: %d, temp2: %d\n", *temp, *temp2);

	while (a)
	{
		temp = array;
		temp2 = temp++;
		while (*temp && *temp2)
		{
			if (*temp < *temp2)
			{
				printf("temp: %d, temp2: %d\n", *temp, *temp2);
				b = *temp;
				*temp = *temp2;
				*temp2 = b;
				print_array(array, size);
			}
			temp++;
			temp2++;
		}
		a--;
	}
}
