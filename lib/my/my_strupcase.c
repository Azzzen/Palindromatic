/*
** EPITECH PROJECT, 2020
** upcase
** File description:
** desc
*/

#include <stddef.h>

char *my_strupcase(char *str)
{
    long long i = 0;
    while (str[i] != '\0') {
        for (long long i = 0; str[i] > 96 && str[i] < 123; i++) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
