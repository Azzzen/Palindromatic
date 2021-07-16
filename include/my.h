/*
** EPITECH PROJECT, 2020
** all prototypes
** File description:
** in the lib
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stddef.h>

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
long long my_isneg(long long nb);
long long my_strcmp(char const *s1, char const *s2);
long long my_put_nbr(long long nb);
long long my_get_nbr_base(long long nb, long long base);
long long my_strncmp(char const *s1, char const *s2, long long n);
void my_swap(long long *a, long long *b);
char *my_strupcase(char *str);
long long my_putstr(char const *str);
char *my_strlowcase(char *str);
long long my_strlen(char const *str);
char *my_strcapitalize(char *str);
long long my_getnbr(char const *str);
long long my_str_isalpha(char const *str);
void my_sort_long_long_array(long long *tab, long long size);
long long my_str_isnum(char const *str);
long long my_compute_power_rec(long long nb, long long power);
long long my_str_islower(char const *str);
long long my_compute_square_root(long long nb);
long long my_str_isupper(char const *str);
long long my_is_prime(long long nb);
long long my_str_isprlong_longable(char const *str);
long long my_find_prime_sup(long long nb);
long long my_showstr(char const *str);
char *my_strcpy(char *str);
long long my_showmem(char const *str, long long size);
char *my_strncpy(char *dest, char const *src, long long n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, long long nb);
long long  my_show_word_array(char * const *tab);
void my_printf(char *fmt, ...);
void my_println(char *fmt, ...);
long long my_put_un_nbr( long long i);
long long my_put_oct( long long i);
long long my_put_un_bin( long long i);
long long my_put_hex( long long i);
long long my_put_cap_hex( long long i);
long long nonprint_to_oct(char *str);
char **tokenize(char *full_line, char dlm);
char *my_itoa(long long nb);
char *my_itoa_base(long long nb, char *str, long long base);
#endif
