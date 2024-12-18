/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** obstacle.c
*/

#include "../include/my_runner.h"

void obstacle(start_t *game)
{
    game->texture_obstacle = sfTexture_createFromFile("Layers/en.png", NULL);
    game->sprite_obstacle = sfSprite_create();
    sfSprite_setTexture(game->sprite_obstacle, game->texture_obstacle, sfTrue);
    game->pos_obstacle.x = 1910;
    game->pos_obstacle.y = 750;
    game->size_obstacle.width = 100;
    game->size_obstacle.height = 103;
    sfSprite_setTextureRect(game->sprite_obstacle, game->size_obstacle);
    sfSprite_setPosition(game->sprite_obstacle, game->pos_obstacle);
    game->clock_obstacle = sfClock_create();
}

void clock_obstacle(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_obstacle).microseconds /50000 >= 1) {
        game->pos_obstacle.x -= 20 ;
        if (game->pos_obstacle.x == 330 && game->pos_char.y == 710)
            game->step = 2;
        if (game->pos_obstacle.x == 330 && game->pos_char.y != 710)
            game->score += 1;
        if (game->score == 5 && game->pos_char.y == 710)
            game->step = 4;
        if (game->pos_obstacle.x <= 0)
        game->pos_obstacle.x = 1910;
        sfSprite_setPosition(game->sprite_obstacle, game->pos_obstacle);
        sfClock_restart(game->clock_obstacle);
    }
}