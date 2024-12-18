/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** clock_background.c
*/

#include "../include/my_runner.h"

void clock_bg(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_bg).microseconds / 50000 >= 1) {
    game->pos_bg.x -= 2;
    if (game->pos_bg.x <= -1920)
        game->pos_bg.x = 1920;
    sfSprite_setPosition(game->sprite_bg, game->pos_bg);
    sfClock_restart(game->clock_bg);
    }
}

void clock_mid(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_mid).microseconds / 50000 >= 1) {
    game->pos_mid.x -= 5;
    if (game->pos_mid.x <= -1920)
        game->pos_mid.x = 1920;
    sfSprite_setPosition(game->sprite_mid, game->pos_mid);
    sfClock_restart(game->clock_mid);
    }
}

void clock_fg(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_fg).microseconds / 50000 >= 1) {
    game->pos_fg.x -= 4;
    if (game->pos_fg.x <= -1920)
        game->pos_fg.x = 1920;
    sfSprite_setPosition(game->sprite_fg, game->pos_fg);
    sfClock_restart(game->clock_fg);
    }
}

void clock_snow(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_snow).microseconds / 50000 >= 1) {
    game->pos_snow.x -= 3;
    if (game->pos_snow.x <= -1920)
        game->pos_snow.x = 1920;
    sfSprite_setPosition(game->sprite_snow, game->pos_snow);
    sfClock_restart(game->clock_snow);
    }
}

void clock_ground(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_gd).microseconds / 50000 >= 1) {
        game->pos_ground.x -= 20;
        if (game->pos_ground.x <= -1920 )
            game->pos_ground.x = 1920;
        sfSprite_setPosition(game->sprite_ground, game->pos_ground);
        sfClock_restart(game->clock_gd);
    }
}