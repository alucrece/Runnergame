/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** all_function.c
*/

#include "../include/my_runner.h"

void draw_all_text(start_t *game)
{
    text_menu(game);
    text_options(game);
    text_pause(game);
    count_score(game);
}

void all_function(start_t *game)
{
    sky(game);
    lose_game(game);
    win_game(game);
    draw_all_text(game);
    bg(game);
    bg1(game);
    middle(game);
    middle1(game);
    foreground(game);
    foreground1(game);
    snow(game);
    snow1(game);
    ground_01(game);
    ground_02(game);
    move_sprite(game);
    obstacle(game);
    score_game(game);
    window(game);
    music(game);
}

void all_clock(start_t *game)
{
    if (game->step == 1) {
        clock_sprite(game);
        clock_obstacle(game);
    }
    clock_bg(game);
    clock_bg1(game);
    clock_mid(game);
    clock_mid1(game);
    clock_fg(game);
    clock_fg1(game);
    clock_snow(game);
    clock_snow1(game);
    clock_ground(game);
    clock_ground1(game);
}