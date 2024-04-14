#include "search_algos.h"

/**
 * binary_search - function to do binary search
 * @array: array to be searched
 * @size: size of array
 * @value: value to look for
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
