/*
** EPITECH PROJECT, 2020
** islower
** File description:
** returns 1 id the string only contains lowercase letters
*/

#include <stddef.h>

long long my_str_islower(char const *str)
{
    if (str == "")
        return (1);
    for (long long i = 0; str[i] != '\0'; i++) {
        if (str[i] < 97 || str[i] > 122)
            return (0);
    }
    return (1);
}
