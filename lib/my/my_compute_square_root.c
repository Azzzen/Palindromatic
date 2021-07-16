/*
** EPITECH PROJECT, 2020
** my compute square root
** File description:
** returns the square root of a number
*/

#include <stddef.h>

long long my_compute_square_root(long long nb)
{
    long long i = 0;

    if (nb <= 0){
        i = 0;
    }
    while (i*i <=  nb){
        if (i*i < nb){
            i = i+1;
        } else if (i*i == nb){
                return (nb);
            }
    }
    return (0);
}
