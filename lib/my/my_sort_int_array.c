/*
** EPITECH PROJECT, 2020
** sort long long array
** File description:
** description
*/
#include "my.h"

void  my_sort_long_long_array(long long *array, long long size)
{
    long long i = 0;
    long long c = 0;
    long long temp = 0;

    for (; i < size; i++) {
        if (array[i] > array[i+1]) {
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            c = 1;
        }
    }
    if (c == 1)
        my_sort_long_long_array(array, size);
}
