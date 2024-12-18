/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** sprite.c
*/

#include "../include/my_runner.h"

void ground_01(start_t *game)
{
    game->texture_ground = sfTexture_createFromFile("./Layers/Gd1.png", NULL);
    game->sprite_ground = sfSprite_create();
    sfSprite_setTexture(game->sprite_ground, game->texture_ground, sfTrue);
    game->pos_ground.x = 0;
    game->pos_ground.y = 0;
    game->size_ground.width = 1920;
    game->size_ground.height = 1080;
    sfSprite_setTextureRect(game->sprite_ground, game->size_ground);
    sfSprite_setPosition(game->sprite_ground, game->pos_ground);
    game->clock_gd = sfClock_create();
}

void move_sprite(start_t *game)
{
    game->texture_char = sfTexture_createFromFile("sprite.png", NULL);
    game->sprite_char = sfSprite_create();
    sfSprite_setTexture(game->sprite_char, game->texture_char, sfTrue);
    game->pos_char.x = 250;
    game->pos_char.y = 710;
    game->size_rect.width = 150;
    game->size_rect.height = 150;
    sfSprite_setTextureRect(game->sprite_char, game->size_rect);
    sfSprite_setPosition(game->sprite_char, game->pos_char);
    game->clock_char = sfClock_create();
}

void clock_sprite(start_t *game)
{
    if (sfClock_getElapsedTime(game->clock_char).microseconds / 50000 >= 0.07) {
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue && game->step == 1)
                game->pos_char.y -= 10;
        else {
            game->pos_char.y += 10;
            if (game->pos_char.y > 710)
                game->pos_char.y = 710;
        }
        sfSprite_setPosition(game->sprite_char, game->pos_char);
        sfClock_restart(game->clock_char);
    }
}