/*
** EPITECH PROJECT, 2020
** my str is alpha
** File description:
** is the character a letter
*/

#include <stddef.h>

long long my_str_isalpha(char const *str)
{
    long long i = 0;

    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0') {
        if (str[i] < 65 && str[i] > 90 || str[i] < 97 && str[i] > 122) {
            i++;
        } else {
            return (0);
        }
    }
    return (1);
}
