/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** parallax_bacground.c
*/

#include "../include/my_runner.h"

void bg1(start_t *game)
{
    game->texture_bg1 = sfTexture_createFromFile("./Layers/BG.png", NULL);
    game->sprite_bg1 = sfSprite_create();
    sfSprite_setTexture(game->sprite_bg1, game->texture_bg1, sfTrue);
    game->pos_bg1.x = 1920;
    game->pos_bg1.y = 0;
    game->size_bg1.width = 1920;
    game->size_bg1.height = 1080;
    sfSprite_setTextureRect(game->sprite_bg1, game->size_bg1);
    sfSprite_setPosition(game->sprite_bg1, game->pos_bg1);
    game->clock_bg1 = sfClock_create();
}

void middle1(start_t *game)
{
    game->texture_mid1 = sfTexture_createFromFile("./Layers/Middle.png", NULL);
    game->sprite_mid1 = sfSprite_create();
    sfSprite_setTexture(game->sprite_mid1, game->texture_mid1, sfTrue);
    game->pos_mid1.x = 1920;
    game->pos_mid1.y = 0;
    game->size_mid1.width = 1920;
    game->size_mid1.height = 1080;
    sfSprite_setTextureRect(game->sprite_mid1, game->size_mid1);
    sfSprite_setPosition(game->sprite_mid1, game->pos_mid1);
    game->clock_mid1 = sfClock_create();
}

void foreground1(start_t *game)
{
    game->texture_fg1 = sfTexture_createFromFile("./Layers/Foregd.png", NULL);
    game->sprite_fg1 = sfSprite_create();
    sfSprite_setTexture(game->sprite_fg1, game->texture_fg1, sfTrue);
    game->pos_fg1.x = 1920;
    game->pos_fg1.y = 0;
    game->size_fg1.width = 1920;
    game->size_fg1.height = 1080;
    sfSprite_setTextureRect(game->sprite_fg1, game->size_fg1);
    sfSprite_setPosition(game->sprite_fg1, game->pos_fg1);
    game->clock_fg1 = sfClock_create();
}

void snow1(start_t *game)
{
    game->texture_snow1 = sfTexture_createFromFile("Layers/Snow.png", NULL);
    game->sprite_snow1 = sfSprite_create();
    sfSprite_setTexture(game->sprite_snow1, game->texture_snow1, sfTrue);
    game->pos_snow1.x = 1920;
    game->pos_snow1.y = 0;
    game->size_snow1.width = 1920;
    game->size_snow1.height = 1080;
    sfSprite_setTextureRect(game->sprite_snow1, game->size_snow1);
    sfSprite_setPosition(game->sprite_snow1, game->pos_snow1);
    game->clock_snow1 = sfClock_create();

}

void ground_02(start_t *game)
{
    game->texture_ground1 = sfTexture_createFromFile("./Layers/Gd1.png", NULL);
    game->sprite_ground1 = sfSprite_create();
    sfSprite_setTexture(game->sprite_ground1, game->texture_ground1, sfTrue);
    game->pos_ground1.x = 1920;
    game->pos_ground1.y = 0;
    game->size_ground1.width = 1920;
    game->size_ground1.height = 1080;
    sfSprite_setTextureRect(game->sprite_ground1, game->size_ground1);
    sfSprite_setPosition(game->sprite_ground1, game->pos_ground1);
    game->clock_gd1 = sfClock_create();
}