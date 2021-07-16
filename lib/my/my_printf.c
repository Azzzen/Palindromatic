/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"

void switch_func(char *fmt, long long i, va_list argp)
{
    switch (fmt[i]) {
    case 's': my_putstr(va_arg(argp, char *));
    break;
    case 'd': case 'i' : my_put_nbr(va_arg(argp, long long));
    break;
    case 'c': my_putchar((char)va_arg(argp, long long));
    break;
    case 'u': my_put_un_nbr(va_arg(argp, long long));
    break;
    case 'o': my_put_oct(va_arg(argp, long long));
    break;
    case 'b': my_put_un_bin(va_arg(argp, long long));
    break;
    case 'x': my_put_hex(va_arg(argp, long long));
    break;
    case '%': my_putchar('%');
    break;
    }
}

void my_printf(char *fmt, ...)
{
    va_list argp;
    va_start(argp, fmt);

    for (long long i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%') {
            i++;
            switch_func(fmt, i, argp);
        } else
            my_putchar(fmt[i]);
        va_end(argp);
    }
}

void my_println(char *fmt, ...)
{
    va_list argp;
    va_start(argp, fmt);

    for (long long i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%') {
            i++;
            switch_func(fmt, i, argp);
        } else
            my_putchar(fmt[i]);
        va_end(argp);
    }
    my_putchar('\n');
}
