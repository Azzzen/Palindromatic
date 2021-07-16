/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** descripton
*/
#include "my.h"

long long my_strcmp(char const *s1, char const *s2)
{
    if (my_strlen(s1) != my_strlen(s2))
        return (1);
    for (long long i = 0; s1[i] != '\0'; i += 1) {
        if (s1[i] != s2[i])
            return (1);
    }
    return (0);
}
