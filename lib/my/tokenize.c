/*
** EPITECH PROJECT, 2021
** B-CPE-210-PAR-2-1-redemption-alexandre.collin-betheuil
** File description:
** tokenize
*/

#include "my.h"

char **tokenize(char *full_line, char dlm)
{
    long long j = 0;
    long long c = 0;
    long long max_length = my_strlen(full_line) - 1;
    char **result = malloc(sizeof(char *) * max_length);

    result[j] = malloc(sizeof(char) * max_length);
    for (long long i = 0; full_line[i] != '\0'; i++) {
        if (full_line[i] == dlm) {
            result[j][c] = '\0';
            j++;
            c = 0;
            result[j] = malloc(sizeof(char) * max_length);
        } else {
            result[j][c] = full_line[i];
            c++;
        }
    }
    free(result[j]);
    result[j] = NULL;
    return (result);
}
