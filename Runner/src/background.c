/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** background.c
*/

#include "../include/my_runner.h"

void sky(start_t *game)
{
    game->texture_sky = sfTexture_createFromFile("./Layers/Sky.png", NULL);
    game->sprite_sky = sfSprite_create();
    sfSprite_setTexture(game->sprite_sky, game->texture_sky, sfTrue);
}

void bg(start_t *game)
{
    game->texture_bg = sfTexture_createFromFile("./Layers/BG.png", NULL);
    game->sprite_bg = sfSprite_create();
    sfSprite_setTexture(game->sprite_bg, game->texture_bg, sfTrue);
    game->pos_bg.x = 0;
    game->pos_bg.y = 0;
    game->size_bg.width = 1920;
    game->size_bg.height = 1080;
    sfSprite_setTextureRect(game->sprite_bg, game->size_bg);
    sfSprite_setPosition(game->sprite_bg, game->pos_bg);
    game->clock_bg = sfClock_create();
}

void middle(start_t *game)
{
    game->texture_mid = sfTexture_createFromFile("./Layers/Middle.png", NULL);
    game->sprite_mid = sfSprite_create();
    sfSprite_setTexture(game->sprite_mid, game->texture_mid, sfTrue);
    game->pos_mid.x = 0;
    game->pos_mid.y = 0;
    game->size_mid.width = 1920;
    game->size_mid.height = 1080;
    sfSprite_setTextureRect(game->sprite_mid, game->size_mid);
    sfSprite_setPosition(game->sprite_mid, game->pos_mid);
    game->clock_mid = sfClock_create();
}

void foreground(start_t *game)
{
    game->texture_fg = sfTexture_createFromFile("./Layers/Foregd.png", NULL);
    game->sprite_fg = sfSprite_create();
    sfSprite_setTexture(game->sprite_fg, game->texture_fg, sfTrue);
    game->pos_fg.x = 0;
    game->pos_fg.y = 0;
    game->size_fg.width = 1920;
    game->size_fg.height = 1080;
    sfSprite_setTextureRect(game->sprite_fg, game->size_fg);
    sfSprite_setPosition(game->sprite_fg, game->pos_fg);
    game->clock_fg = sfClock_create();
}

void snow(start_t *game)
{
    game->texture_snow = sfTexture_createFromFile("Layers/Snow.png", NULL);
    game->sprite_snow = sfSprite_create();
    sfSprite_setTexture(game->sprite_snow, game->texture_snow, sfTrue);
    game->pos_snow.x = 0;
    game->pos_snow.y = 0;
    game->size_snow.width = 1920;
    game->size_snow.height = 1080;
    sfSprite_setTextureRect(game->sprite_snow, game->size_snow);
    sfSprite_setPosition(game->sprite_snow, game->pos_snow);
    game->clock_snow = sfClock_create();
}