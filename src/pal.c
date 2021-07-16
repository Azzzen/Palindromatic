/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-axel.zenine
** File description:
** flags
*/

#include "palindrome.h"
#include <stdio.h>

void fill_rest(palindrome_t *pal)
{
    pal->first = pal->num;
    pal->revnum = rev_long_long(pal->num);
    pal->convnum = dec_to_base(pal->bas, pal->num);
    pal->conv_revnum = rev_long_long(pal->convnum);
}

void exit_pal(palindrome_t *pal)
{
    printf("invalid argument\n");
    free(pal);
    exit(84);
}

bool is_a_pal(long long num)
{
    if (num == rev_long_long(num))
        return true;
    return false;
}

bool is_pal(palindrome_t *pal, long long iter)
{
    if (pal->num < 0) {
        free(pal);
        printf("no solution\n");
        exit(0);
    }
    if (pal->convnum == pal->conv_revnum) {
        printf("%lld leads to %lld in %lld iteration(s) in base %lld\n", \
        pal->first, pal->num, iter, pal->bas);
        pal->found = true;
        return (true);
    }
    return (false);
}

bool is_right_pal(palindrome_t *pal, long long iter)
{
    if (pal->convnum == pal->pal) {
        printf("%lld leads to %lld in %lld iteration(s) in base %lld\n", \
        pal->first, pal->pal, iter, pal->bas);
        pal->found = true;
        return (true);
    }
    return (false);
}