/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-axel.zenine
** File description:
** error
*/

#include "palindrome.h"
#include <string.h>

bool b_isvalid(long long i)
{
    if (i > 1 && i <= 10)
        return true;
    return false;
}

bool is_valid_n(long long ac, char **av, palindrome_t *pal)
{
    char *end;

    if (av[1] && !my_str_isnum(av[2]))
        return false;
    for (long long i = 1; av[i]; i += 2) {
        if (!my_str_isnum(av[i+1]))
            return (false);
        if (strcmp(av[i], "-b") == 0 && b_isvalid(strtoll(av[i+1], &end, 10)))
            pal->bas = strtoll(av[i+1], &end, 10);
        if (strcmp(av[i], "-b") == 0 && !b_isvalid(strtoll(av[i+1], &end, 10)))
            return (false);
        if (strcmp(av[i], "-imin") == 0 && strtoll(av[i+1], &end, 10))
            pal->min = strtoll(av[i+1], &end, 10);
        if (strcmp(av[i], "-imax") == 0 && strtoll(av[i+1], &end, 10))
            pal->max = strtoll(av[i+1], &end, 10);
        if (strcmp(av[i], "-p") == 0)
            return (false);
    }
    return true;
}

bool b_check(char **av, long long i)
{
    char *end;

    if (!b_isvalid(strtoll(av[i+1], &end, 10)) || (dec_to_base(strtoll(av[i +1]\
    , &end, 10), strtoll(av[2], &end, 10)) != rev_long_long(dec_to_base(strtoll\
    (av[i +1], &end, 10), strtoll(av[2], &end, 10))))) {
        return (false);
    }
    return true;
}

bool is_flag(char *flag)
{
    if (strcmp(flag, "-n") != 0 &&
        strcmp(flag, "-p") != 0 &&
        strcmp(flag, "-b") != 0 &&
        strcmp(flag, "-imin") != 0 &&
        strcmp(flag, "-imax") != 0)
        return (false);
    return (true);
}

bool check_flags(palindrome_t *pal)
{
    if (pal->pal != 0 && pal->num != 1) {
        return false;
    }
    if (pal->bas < 2 || pal->bas > 10) {
        return false;
    }
    if (pal->pal != 0 && (!is_a_pal(dec_to_base(pal->bas, pal->pal)))) {
        return false;
    }
    if (pal->max < pal->min) {
        return false;
    }
    return true;
}