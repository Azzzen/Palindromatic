/*
** EPITECH PROJECT, 2021
** B-MUL-100-PAR-1-1-myrunner-axel.zenine
** File description:
** my_itoa
*/

#include "my.h"
#include <stddef.h>

char *my_itoa(long long nb)
{
    long long is_neg = nb < 0;
    long long count = 0;
    char *str = malloc(sizeof(char) * 20);
    for (long long i = 0; i < 20; i++)
        str[i] = '\0';
    if (nb == 0){
        return "0";
    }
    if (is_neg)
        nb *= -1;
    while (nb > 0) {
        str[count++] = (nb % 10) + '0';
        nb /= 10;
    }
    if (is_neg)
        str[count++] = '-';
    str = my_revstr(str);
    return (str);
}

char *my_itoa_base(long long nb, char *str, long long base)
{
    long long ret = 0;
    long long i = 0;
    while (nb != 0) {
        ret = nb%base;
        str[i++] = (ret > 9) ? (ret-10) + 'a' : ret + '0';
        nb = nb /base;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}