/*
** EPITECH PROJECT, 2020
** my_put_hex
** File description:
** displays a number in hex base
*/
#include "my.h"

long long my_put_hex(  long long i)
{
    if (i >= 16)
        (my_put_nbr(i/16));
    my_putchar((i%16) + 48);
}
