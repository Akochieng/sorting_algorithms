#include "sort.h"
/**
  *quick_sort_hoare - sorts an array of integers in ascending order
  *@array: the array to be sorted
  *@size: the size of the array
  *Description: uses the quick sort algorithm
  *Return: void
  */
void quick_sort_hoare(int *array, size_t size)
{
	size_t len = size;

	array_head = array;
	quick_func(array, size, len);
}
/**
  *quicksort_func - helper function to the quick_sort function
  *@array: the array to be sorted
  *@size: the size of the array
  *@len: the length of the array
  *
  *Return: void
  */
void quick_func(int *array, size_t size, size_t len)
{
	size_t p;

	if (size < 2)
		return;
	print_array(array_head, len);
	p = partition(array, size);
	quick_func(array, p, len);
	quick_func(&array[p + 1], size - p - 1, len);
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
	size_t lt, rt, p;

	p = size - 1;
	rt = p - 1;
	lt = 0;
	while (rt > lt)
	{
		while (lt < size && array[lt] < array[p])
			lt++;
		while (rt > 0 && array[rt] >= array[p])
			rt--;
		if (lt >= rt)
			break;
		array[rt] = array[lt] ^ array[rt];
		array[lt] = array[rt] ^ array[lt];
		array[rt] = array[rt] ^ array[lt];
		rt--;
		lt++;
	}
	if (array[lt] != array[p])
	{
		array[p] = array[lt] ^ array[p];
		array[lt] = array[lt] ^ array[p];
		array[p] = array[lt] ^ array[p];
	}
	return (lt);
}
