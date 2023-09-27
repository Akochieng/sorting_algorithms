#include "sort.h"


void merge_sort(int *array, size_t size)
{
	size_t l, r, mid;
	int *leftarray, *rightarray;

	leftarray = NULL;
	rightarray = NULL;
	if (size > 1)
	{
		mid = size / 2;
		leftarray = array;
		rightarray = &array[mid];
		merge_sort(leftarray, mid);
		merge_sort(rightarray, size - mid);
	}
	else
		return;
	printf("Merging...\n");
	printf("[left]: ");
	print_array(leftarray, mid);
	printf("[right]: ");
	print_array(rightarray, size - mid);
	l = r = 0;
	while (l < mid && r < size - mid)
	{
		while (rightarray[r] > leftarray[r] && r < size - mid - 1)
			r++;
		while (leftarray[l] < rightarray[r] && l < mid - 1)
			l++;
		if (l >= mid || r >= size - mid)
			break;
		else if (leftarray[l] > rightarray[r])
		{
			leftarray[l] = rightarray[r] ^ leftarray[l];
			rightarray[l] = rightarray[r] ^ leftarray[l];
			leftarray[l] = rightarray[r] ^ leftarray[l];
		}
	}
	printf("[Done]: ");
	print_array(leftarray, size);
}
