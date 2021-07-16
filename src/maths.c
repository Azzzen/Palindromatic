/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-axel.zenine
** File description:
** tests
*/

#include "palindrome.h"

long long rev_long_long(long long nb)
{
    long long rev = 0;
    long long ret = 0;

    while (nb != 0) {
        ret = nb%10;
        rev = rev*10+ret;
        nb /= 10;
    }
    return (rev);
}

int which_flag(palindrome_t *pal)
{
    if (pal->num != 1)
        return (1);
    if (pal->pal != 0)
        return (2);
    return (-1);
}

int start_tests(long long ac, char **av, palindrome_t *pal)
{
    switch (which_flag(pal)) {
    case 1:
        reload_n(pal);
        break;
    case 2:
        reload_p(pal);
        break;
    }
    return (0);
}