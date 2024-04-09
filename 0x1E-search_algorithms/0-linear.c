#include "search_algos.h"

/**
 * linear_search - function to search for a value in an array
 * @array: the array to search through
 * @size: size of array
 * @value: value to look for
 * Return: index of value in array
*/

int linear_search(int *array, size_t size, int value)
{
     size_t i;
    
    if (array ==  NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {

        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}
