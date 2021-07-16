/*
** EPITECH PROJECT, 2020
** my_put_un_nbr
** File description:
** displays an  number
*/
#include "my.h"

long long my_put_un_nbr( long long i)
{
    if (i >= 10)
        (my_put_un_nbr(i/10));
    my_putchar((i%10) + 48);
}
