/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** task 2
*/
#include "my.h"

long long my_putstr(char const *str)
{
    long long i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
