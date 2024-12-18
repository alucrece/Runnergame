/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** main.c
*/

#include "./include/my_runner.h"

void window(start_t *game)
{
    game->mode.width = 1920;
    game->mode.height = 1080;
    game->window = sfRenderWindow_create(game->mode, "MY_RUNNER",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 60);
}

int main(int ac, char **av)
{
    start_t *game;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        my_putstr("Finite runner created with CSFML.\n");
        my_putchar('\n');
        my_putstr("USAGE\n   ./my_runner map.txt\n");
        my_putchar('\n');
        my_putchar('\n');
        my_putstr("\n");
        my_putstr(" -i                launch the game in infinity mode.\n");
        my_putstr(" -h                print the usage and quit.\n");
        my_putchar('\n');
        my_putstr("USER INTERACTIONS\n");
        my_putstr(" SPACE_KEY        jump.\n");
    }
    else
        my_runner(game);
    return (0);
}