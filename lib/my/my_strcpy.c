/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** function to copy a string to another
*/
#include <unistd.h>

#include "my.h"

char *my_strcpy(char *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    long long i = 0;

    while (str[i]) {
        dest[i] = str[i];
        i++;
    }
    return (dest);
}
