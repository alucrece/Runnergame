/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** clock_parallax.c
*/

#include "../include/my_runner.h"

void clock_bg1(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_bg1).microseconds / 50000 >= 1) {
        game->pos_bg1.x -= 2;
        if (game->pos_bg1.x <= -1920)
            game->pos_bg1.x = 1920;
        sfSprite_setPosition(game->sprite_bg1, game->pos_bg1);
        sfClock_restart(game->clock_bg1);
    }
}

void clock_mid1(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_mid1).microseconds / 50000 >= 1) {
        game->pos_mid1.x -= 5;
        if (game->pos_mid1.x <= -1920)
            game->pos_mid1.x = 1920;
        sfSprite_setPosition(game->sprite_mid1, game->pos_mid1);
        sfClock_restart(game->clock_mid1);
    }
}

void clock_fg1(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_fg1).microseconds / 50000 >= 1) {
        game->pos_fg1.x -= 4;
        if (game->pos_fg1.x <= -1920)
            game->pos_fg1.x = 1920;
        sfSprite_setPosition(game->sprite_fg1, game->pos_fg1);
        sfClock_restart(game->clock_fg1);
    }
}

void clock_snow1(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_snow1).microseconds / 50000 >= 1) {
        game->pos_snow1.x -= 3;
        if (game->pos_snow1.x <= -1920)
            game->pos_snow1.x = 1920;
        sfSprite_setPosition(game->sprite_snow1, game->pos_snow1);
        sfClock_restart(game->clock_snow1);
    }
}

void clock_ground1(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_gd1).microseconds / 50000 >= 1) {
        game->pos_ground1.x -= 20;
        if (game->pos_ground1.x <= -1920 )
            game->pos_ground1.x = 1920;
        sfSprite_setPosition(game->sprite_ground1, game->pos_ground1);
        sfClock_restart(game->clock_gd1);
    }
}