/*
** EPITECH PROJECT, 2020
** lowcase
** File description:
** description
*/

#include <stddef.h>

char *my_strlowcase(char * str)
{
    long long i = 0;
    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}
