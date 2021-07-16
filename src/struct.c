/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-axel.zenine
** File description:
** struct
*/

#include "palindrome.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long conv_decimal(long long base, long long nb)
{
    long long dec = 0;
    long long ret = 0;

    for (long long i = 0; nb != 0; i += 1) {
        ret = nb%10;
        nb /= 10;
        dec += ret * pow(base, i);
    }
    return dec;
}

long long dec_to_base(long long base, long long nb)
{
    char buf[65];
    char *end;
    long long res = strtoll(my_itoa_base(nb, buf, base), &end, 10);
    return res;
}

void load_flags(char **av, palindrome_t *pal)
{
    char *end;

    for (long long i = 1; av[i]; i += 2) {
        if (!my_str_isnum(av[i+1]))
            exit_pal(pal);
        if (strcmp(av[i], "-b") == 0)
            pal->bas = strtoll(av[i+1], &end, 10);
        if (strcmp(av[i], "-imin") == 0)
            pal->min = strtoll(av[i+1], &end, 10);
        if (strcmp(av[i], "-imax") == 0)
            pal->max = strtoll(av[i+1], &end, 10);
        if (strcmp(av[i], "-n") == 0)
            pal->num = strtoll(av[i+1], &end, 10);
        if (strcmp(av[i], "-p") == 0)
            pal->pal = strtoll(av[i+1], &end, 10);
        if (!is_flag(av[i]) || pal->bas < 2)
            exit_pal(pal);
    }
    fill_rest(pal);
}

void load_n_flags(char **av, palindrome_t *pal)
{
    char *end;

    if (my_strcmp(av[1], "-n") == 0) {
        pal->num = strtoll(av[2], &end, 10);
        pal->first = pal->num;
        pal->revnum = rev_long_long(pal->num);
        pal->convnum = dec_to_base(pal->bas, pal->num);
        pal->conv_revnum = rev_long_long(pal->convnum);
    }
}

void init_default_struct(palindrome_t *pal)
{
    pal->found = false;
    pal->first = 0;
    pal->num = 1;
    pal->bas = 10;
    pal->pal = 0;
    pal->min = 0;
    pal->max = 100;
}
