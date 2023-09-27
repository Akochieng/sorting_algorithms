#include <stdio.h>
#include "../sort.h"
/**
  *main - tests the bubble sort function
  *
  *Description: prints the iterations of sorted values
  *Return: 0 on success
  */
int main(void)
{
	size_t n;
	int arr1[] = {7, 16, 4, 10, 2, 18, 20, 8, 13, 12, 3, 1, 19, 9, 6, 11,
		17, 14, 15, 5};
/*	int arr2[] = {13, 17, 19, 1, 12, 7, 5, 10, 8, 4, 6, 14, 15, 16, 3, 9,
		2, 20, 18, 11};
	int arr3[] = {5, 11, 13, 19, 20, 8, 15, 18, 16, 3, 2, 17, 7, 9, 1, 10,
		14, 4, 6, 12};
	int arr4[] = {18, 20, 17, 16, 12, 11, 4, 8, 9, 13, 14, 10, 1, 19, 3,
		15, 5, 7, 6, 2};
	int arr5[] = {6, 11, 19, 16, 18, 3, 7, 17, 10, 8, 4, 5, 15, 13, 1, 2,
		9, 12, 14, 20};
*/
	n = sizeof(arr1) / sizeof(arr1[0]);
	print_array(arr1, n);
	printf("\n");
	bubble_sort(arr1, n);
/**
	n = sizeof(arr2) / sizeof(arr2[0]);
	print_array(arr2, n);
	printf("\n");
	bubble_sort(arr2, n);

	n = sizeof(arr3) / sizeof(arr3[0]);
	print_array(arr3, n);
	printf("\n");
	bubble_sort(arr3, n);

	n = sizeof(arr4) / sizeof(arr4[0]);
	print_array(arr4, n);
	printf("\n");
	bubble_sort(arr4, n);

	n = sizeof(arr5) / sizeof(arr5[0]);
	print_array(arr5, n);
	printf("\n");
	bubble_sort(arr5, n);
**/	return (0);
}
