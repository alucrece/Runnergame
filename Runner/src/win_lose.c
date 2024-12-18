/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** win_lose.c
*/

#include "../include/my_runner.h"

void win_game(start_t *game)
{
    game->texture_win = sfTexture_createFromFile("./Layers/win.png", NULL);
    game->sprite_win = sfSprite_create();
    sfSprite_setTexture(game->sprite_win, game->texture_win, sfTrue);
    game->pos_win.x = 600;
    game->pos_win.y = 400;
    sfSprite_setPosition(game->sprite_win, game->pos_win);
}

void lose_game(start_t *game)
{
    game->texture_lose = sfTexture_createFromFile("./Layers/lose.png", NULL);
    game->sprite_lose = sfSprite_create();
    sfSprite_setTexture(game->sprite_lose, game->texture_lose, sfTrue);
    game->pos_lose.x = 600;
    game->pos_lose.y = 400;
    sfSprite_setPosition(game->sprite_lose, game->pos_lose);
}