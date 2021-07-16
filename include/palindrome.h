/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include "my.h"
#include <stdbool.h>
#include <stddef.h>

typedef struct palindrome_s
{
    long long first;
    long long num;
    long long revnum;
    long long convnum;
    long long conv_revnum;
    long long pal;
    long long bas;
    long long min;
    long long max;
    bool found;
} palindrome_t;

/*Main.c*/
long long reload_n(palindrome_t *pal);
long long reload_p(palindrome_t *pal);
long long dec_to_base(long long base, long long nb);

/*Struct.c*/
void load_flags(char **av, palindrome_t *pal);

void load_n_flags(char **av, palindrome_t *pal);
void init_default_struct(palindrome_t *pal);
bool is_pal(palindrome_t *pal, long long iter);
long long conv_decimal(long long base, long long nb);

/*Usage.c*/
void usage(void);

/*Test.c*/
long long rev_long_long(long long nb);
bool is_a_pal(long long num);
bool is_right_pal(palindrome_t *pal, long long iter);
int start_tests(long long ac, char **av, palindrome_t *pal);
long long reload_p(palindrome_t *pal);
long long reload_n(palindrome_t *pal);

/*pal.c*/
void fill_rest(palindrome_t *pal);
void exit_pal(palindrome_t *pal);

/*Error.c*/
bool is_valid_n(long long ac, char **av, palindrome_t *pal);
bool check_flags(palindrome_t *pal);
bool is_flag(char *flag);

#endif /* !PALINDROME_H_ */
