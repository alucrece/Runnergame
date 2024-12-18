/*
** EPITECH PROJECT, 2021
** utils
** File description:
** fonction that i use in my program
*/

#include "../include/my_runner.h"

void my_putchar (char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    if (str) {
        while (str[i] != '\0')
            my_putchar(str[i++]);
    }
}

char *my_display_score(int nb)
{
    int len = 0;
    char *str;
    int tmp;

    tmp = nb;
    while (tmp > 0) {
        tmp /= 10;
        len++;
    }
    str = malloc(sizeof(*str) * (len + 1));
    str[len] = '\0';
    while (len--) {
        str[len] = nb % 10 + '0';
        nb /= 10;
    }
    return (str);
}