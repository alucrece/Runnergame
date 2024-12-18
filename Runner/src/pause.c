/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** pause.c
*/

#include "../include/my_runner.h"

void text_pause(start_t *game)
{
    game->strm = "Clic c to continue\n r to restart\n or m to back to the menu";
    game->font_pause = sfFont_createFromFile("police/E-Muse-Bold.otf");
    game->text_pause = sfText_create();
    sfText_setCharacterSize(game->text_pause, 50);
    sfText_setString(game->text_pause, game->strm);
    sfText_setFont(game->text_pause, game->font_pause);
    sfText_setColor(game->text_pause, sfGreen);
    game->pos_pause.x = 500;
    game->pos_pause.y = 600;
    sfText_setPosition(game->text_pause, game->pos_pause);
}