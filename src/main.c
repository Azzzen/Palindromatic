/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-axel.zenine
** File description:
** main
*/

#include "palindrome.h"
#include <string.h>

long long reload_n(palindrome_t *pal)
{
    char str[65];
    char *end;

    for (long long i = 0; i <= pal->max; i += 1) {
        if (i >= pal->min && is_pal(pal, i))
            break;
        pal->num += conv_decimal(pal->bas, pal->conv_revnum);
        pal->revnum = rev_long_long(pal->num);
        pal->convnum = strtoll(my_itoa_base(pal->num, str, pal->bas), &end, 10);
        pal->conv_revnum = rev_long_long(pal->convnum);
    }
    if (!pal->found)
        printf("no solution\n");
    return (0);
}

long long iterate(palindrome_t *pal)
{
    char str[65];
    char *end;

    for (long long i = 0; i <= pal->max;i += 1) {
        if (i >= pal->min && i <= pal->max && pal->num == pal->pal) {
            pal->found = true;
            printf("%lld leads to %lld in %lld iteration(s) in base %lld\n",
            pal->first, pal->pal, i, pal->bas);
            return (0);
        }
        pal->revnum = rev_long_long(pal->num);
        pal->convnum = strtoll(my_itoa_base(pal->num, str, pal->bas), &end, 10);
        pal->conv_revnum = rev_long_long(pal->convnum);
        pal->num += conv_decimal(pal->bas, pal->conv_revnum);
        if ((unsigned) pal->num > pal->pal)
            return (0);
    }
    return (0);
}

long long reload_p(palindrome_t *pal)
{
    for (pal->first = 1; pal->first <= pal->pal; pal->first += 1) {
        pal->num = pal->first;
        iterate(pal);
    }
    if (!pal->found)
        printf("no solution\n");
    return (0);
}

int main(int ac, char **av)
{
    palindrome_t *pal = malloc(sizeof(palindrome_t));
    int err = 0;

    if (ac < 2 || ac%2 != 1) {
        exit_pal(pal);
        return (84);
    }
    init_default_struct(pal);
    load_flags(av, pal);
    if (!check_flags(pal) || ac%2 != 1) {
        printf("invalid argument\n");
        free(pal);
        return 84;
    }
    err = start_tests(ac, av, pal);
    free(pal);
    return (err);
}