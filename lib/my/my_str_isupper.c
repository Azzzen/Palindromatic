/*
** EPITECH PROJECT, 2020
** isupper
** File description:
** description
*/

#include <stddef.h>

long long my_str_isupper(char const *str)
{
    if (str == "")
        return (1);
    for (long long i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 90)
            return (0);
    }
    return (1);
}
