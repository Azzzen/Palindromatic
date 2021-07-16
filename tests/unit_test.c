/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-axel.zenine
** File description:
** unit_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "palindrome.h"

Test(main, test1, .init=cr_redirect_stdout)
{
    int ac = 5;
    char *input[] = {"./palindrome", "-p", "363", "-b", "10"};
    main(&ac, input);
    cr_assert_stdout_eq_str("3 leads to 363 in 6 iteration(s) in base 10\n  \
    6 leads to 363 in 5 iteration(s) in base 10\n \
    12 leads to 363 in 4 iteration(s) in base 10\n \
    15 leads to 363 in 3 iteration(s) in base 10\n \
    21 leads to 363 in 4 iteration(s) in base 10\n \
    24 leads to 363 in 3 iteration(s) in base 10\n \
    30 leads to 363 in 4 iteration(s) in base 10\n \
    33 leads to 363 in 3 iteration(s) in base 10\n \
    39 leads to 363 in 2 iteration(s) in base 10\n \
    42 leads to 363 in 3 iteration(s) in base 10\n \
    48 leads to 363 in 2 iteration(s) in base 10\n \
    51 leads to 363 in 3 iteration(s) in base 10\n \
    57 leads to 363 in 2 iteration(s) in base 10\n \
    60 leads to 363 in 3 iteration(s) in base 10\n \
    66 leads to 363 in 2 iteration(s) in base 10\n \
    75 leads to 363 in 2 iteration(s) in base 10\n \
    84 leads to 363 in 2 iteration(s) in base 10\n \
    93 leads to 363 in 2 iteration(s) in base 10\n \
    132 leads to 363 in 1 iteration(s) in base 10\n \
    231 leads to 363 in 1 iteration(s) in base 10\n \
    330 leads to 363 in 1 iteration(s) in base 10\n \
    363 leads to 363 in 0 iteration(s) in base 10\n ");
}

// Test(usage, test1, .init=cr_redirect_stdout)
// {
//     usage();
//     fflush(stdout);
//     cr_assert_stdout_eq_str("prout\n");
// }