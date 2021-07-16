/*
** EPITECH PROJECT, 2020
** ISNEG
** File description:
** task04
*/
#include "my.h"

long long     my_isneg(long long n)
{
    if (n<0) {
        my_putchar ('N');
    } else {
        my_putchar ('P');
    }
    return (0);
}
