#include "sort.h"
/**
  *quick_sort - sorts an array of integers in ascending order
  *@array: the array to be sorted
  *@size: the size of the array
  *Description: uses the quick sort algorithm
  *Return: void
  */
void quick_sort(int *array, size_t size)
{
	size_t len = size;
	int **array_head;

	*array_head = array;
	quicksort_func(array, size, len);
}
/**
  *quicksort_func - helper function to the quick_sort function
  *@array: the array to be sorted
  *@size: the size of the array
  *@len: the length of the array
  *
  *Return: void
  */
void quicksort_func(int *array, int **array_head, size_t size, size_t len)
{
	size_t p;

	if (size < 2)
		return;
	print_array(*array_head, len);
	p = partition(array, size);
	quicksort_func(array, array_head, p, len);
	quicksort_func(&array[p + 1], array_head, size - p - 1, len);
}
/**
  *partition - using the last element as the pivot, it moves
  *each element to the left or right depending on whether it
  *is greater or smaller than the value at the pivot
  *@array: the array
  *@size: the size of the array
  *
  *Return: the new pivot
  */
size_t partition(int *array, size_t size)
{
	size_t rt, p;
	ssize_t lt;

	p = size - 1;
	lt = -1;
	rt = 0;
}
