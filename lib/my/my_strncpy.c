/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** function to copy a string to another
*/
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, long long n)
{
    long long i = 0;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return (dest);
}
