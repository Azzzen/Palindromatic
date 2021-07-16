/*
** EPITECH PROJECT, 2020
** my get nbr
** File description:
** returns a number given as a string
*/

#include <stddef.h>

long long minus(long long c, long long final)
{
    if (c % 2 == 1) {
        final = final *(-1);
    }
    return (final);
}

long long my_getnbr(char const *str)
{
    long long final = 0;
    long long n = 0;
    long long i = 0;
    long long minus_counter = 0;

    for (i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-') {
            minus_counter++;
        }
    }
    for (i; str[i] >= '0' && str[i] <= '9'; i++) {
        n = str[i] - 48;
        final = n + (final * 10);
    }
    if (final > 2147483647 || final < (-2147483647 - 1))
        return (0);
    minus(minus_counter, final);
    return (final);
}
