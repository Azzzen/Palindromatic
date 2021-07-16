/*
** EPITECH PROJECT, 2020
** isprlong longable
** File description:
** description
*/

#include <stddef.h>

long long my_str_isprintable(char const *str)
{
    long long i = 0;

    if (str[i] == '\0') {
        return (1);
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126)
            return (0);
    }
    return (1);
}
