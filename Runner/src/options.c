/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** options.c
*/

#include "../include/my_runner.h"

void options(start_t *game)
{
    game->texture_options = sfTexture_createFromFile("./Layers/opt.png", NULL);
    game->sprite_options = sfSprite_create();
    sfSprite_setTexture(game->sprite_options, game->texture_options, sfTrue);
}

void text_options(start_t *game)
{
    game->strm = "ABOUT THE GAME && INSTRUCTIONS";
    game->font_options = sfFont_createFromFile("police/E-Muse-Bold.otf");
    game->text_options = sfText_create();
    sfText_setCharacterSize(game->text_options, 50);
    sfText_setString(game->text_options, game->strm);
    sfText_setFont(game->text_options, game->font_options);
    sfText_setColor(game->text_options, sfYellow);
    game->pos_options.x = 400;
    game->pos_options.y = 200;
    sfText_setPosition(game->text_options, game->pos_options);
}