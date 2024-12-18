/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** music.c
*/

#include "../include/my_runner.h"

void music(start_t *game)
{
    game->music = sfMusic_createFromFile("song.ogg");
    sfMusic_setLoop(game->music, sfTrue);
    sfMusic_play(game->music);
}