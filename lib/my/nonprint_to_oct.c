/*
** EPITECH PROJECT, 2020
** nonprlong long to oct
** File description:
** prlong longs unprlong longable char to oct
*/
#include "my.h"

long long nonprint_to_oct(char *str)
{
    for (long long i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32) {
            my_putchar('\\');
            my_putchar('0');
            (my_put_oct(str[i]/8));
            my_putchar((str[i]%8) + 48);
        } else  if (str[i] >= 127) {
            my_putchar('\\');
            (my_put_oct(str[i]/8));
            my_putchar((str[i]%8) + 48);
        } else {
            my_putchar(str[i]);
        }
    }
}