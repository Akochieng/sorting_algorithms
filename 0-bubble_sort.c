#include "sort.h"
/**
  *bubble_sort - uses bubble sort to sort an array of integers
  *@array: the array of integers
  *@size: the size of the array
  *Description: prints each iteration of bubble sort
  *Return: void
  */
void bubble_sort(int *array, size_t size)
{
	size_t cur, prev;
	int change = 1;

	while (change)
	{
		for (cur = 1; cur < size; cur++)
		{
			prev = cur - 1;
			if (array[prev] > array[cur])
			{
				array[prev] = array[cur] ^ array[prev];
				array[cur] = array[prev] ^ array[cur];
				array[prev] = array[prev] ^ array[cur];
				change++;
			}
			if (cur == size - 1 && change == 1)
				change = 0;
			else if (cur == size - 1 && change > 1)
				change = 1;
		}
		print_array(array, size);
	}
}
