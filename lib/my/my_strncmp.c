/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** compares
*/

#include <stddef.h>

long long my_strncmp(char const *s1, char const *s2, long long n)
{
    long long i = 0;
    while (i < n) {
        if (s1[i] > s2[i])
            return (1);
        else if (s1[i] < s2[i])
            return (-1);
        else ((n-1) == i);
        return (0);
    }
    i++;
}
