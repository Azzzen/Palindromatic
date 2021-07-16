/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** displays a number
*/
#include "my.h"

long long my_put_nbr(long long i)
{
    if (i < 0) {
        my_putchar ('-');
        i = i * (-1);
    }
    if (i >= 10)
        (my_put_nbr(i/10));
    my_putchar((i%10) + 48);
}
