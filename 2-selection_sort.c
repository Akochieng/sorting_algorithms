#include "sort.h"
/**
  *selection_sort - sorts an array of integers in ascending order
  *@array: the array
  *@size: the size of the array
  *
  *Return: void
  */
void selection_sort(int *array, size_t size)
{
	int change;
	size_t min, start, pos;

	min = start = pos = 0;
	change = 1;
	while (start < size)
	{
		for (pos = start; pos < size; pos++)
			if (array[pos] < array[min])
			{
				min = pos;
				change++;
			}
		if (change > 1)
		{
			array[start] = array[start] ^ array[min];
			array[min] = array[start] ^ array[min];
			array[start] = array[start] ^ array[min];
			change = 1;
			print_array(array, size);
		}
		start += 1;
		min = start;
	}
}
