/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** task01
*/

#include <stddef.h>

void my_swap(long long  *a, long long *b)
{
    long long c;

    c = *a;
    *a = *b;
    *b = c;
}
