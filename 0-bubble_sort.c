#include "sort.h"

/**
 * switch_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void switch_ints(int *a, int *b)
{
	int tmp_v;

	tmp_v = *a;
	*a = *b;
	*b = tmp_v;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool b = false;

	if (array == NULL || size < 2)
		return;

	while (b == false)
	{
		b = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				switch_ints(array + i, array + i + 1);
				print_array(array, size);
				b = false;
			}
		}
		len--;
	}
}
