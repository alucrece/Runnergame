/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** score.c
*/

#include "../include/my_runner.h"

void score_game(start_t *game)
{
    game->texture_score = sfTexture_createFromFile("./Layers/Score.png", NULL);
    game->sprite_score = sfSprite_create();
    sfSprite_setTexture(game->sprite_score, game->texture_score, sfTrue);
    game->pos_score.x = 736;
    game->pos_score.y = 50;
    sfSprite_setPosition(game->sprite_score, game->pos_score);
}

void count_score(start_t *game)
{
    game->strl = my_display_score(game->score);
    game->font_count = sfFont_createFromFile("police/E-Muse-Bold.otf");
    game->text_count = sfText_create();
    sfText_setCharacterSize(game->text_count, 70);
    sfText_setString(game->text_count, game->strl);
    sfText_setFont(game->text_count, game->font_count);
    sfText_setColor(game->text_count, sfBlue);
    game->pos_count.x = 1125;
    game->pos_count.y = 60;
    sfText_setPosition(game->text_count, game->pos_count);
}