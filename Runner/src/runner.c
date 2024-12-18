/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** runner.c
*/

#include "../include/my_runner.h"

void render_step(start_t *game)
{
    if (game->step == 0) {
        sfRenderWindow_drawSprite(game->window, game->sprite_menu, NULL);
        sfRenderWindow_drawSprite(game->window, game->sprite_button, NULL);
        sfRenderWindow_drawText(game->window, game->text_menu, NULL);
        sfRenderWindow_drawText(game->window, game->text_count, NULL);
    }
    if (game->step == 3) {
        sfRenderWindow_drawSprite(game->window, game->sprite_options, NULL);
        sfRenderWindow_drawText(game->window, game->text_options, NULL);
    }
    if (game->step == 2)
        sfRenderWindow_drawSprite(game->window, game->sprite_lose, NULL);
    if (game->step == 4)
        sfRenderWindow_drawSprite(game->window, game->sprite_win, NULL);
    if (game->step == 5)
        sfRenderWindow_drawText(game->window, game->text_pause, NULL);
}

void draw_sprite(start_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->sprite_sky, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_bg,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_bg1,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_mid,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_mid1,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_fg,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_fg1,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_snow, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_snow1, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_ground,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_ground1,  NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_char, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_score, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite_obstacle, NULL);
    sfRenderWindow_drawText(game->window, game->text_count, NULL);
    render_step(game);
}

void condition_keyboard(start_t *game)
{
    if (game->step == 5 || game->step == 4 || game->step == 2)
        if (sfKeyboard_isKeyPressed(sfKeyR) == sfTrue) {
            game->step = 1;
            game->score = 0;
            game->pos_obstacle.x = 1910;
            game->pos_obstacle.y = 750; }
    if (game->step == 1 || game->step == 4 || game->step == 2
    || game->step == 3 || game->step == 5)
        if (sfKeyboard_isKeyPressed(sfKeyM) == sfTrue) {
            game->step = 0;
            game->score = 0;
            game->pos_obstacle.x = 1910;
            game->pos_obstacle.y = 750;
        }
    if (game->step == 5)
        if (sfKeyboard_isKeyPressed(sfKeyC) == sfTrue)
            game->step = 1;
    if (game->step == 1)
        if (sfKeyboard_isKeyPressed(sfKeyP) == sfTrue)
            game->step = 5;
}

void condition_menu(start_t *game)
{
    if (game->step == 0) {
            menu(game);
            click_bottom_play(game);
    }
    if (game->step == 3)
        options(game);
}

void my_runner(start_t *game)
{
    game = malloc(sizeof(start_t));
    game->step = 0;
    game->score = 0;

    all_function(game);
    while (sfRenderWindow_isOpen(game->window)) {
        condition_menu(game);
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            condition_keyboard(game);
            if (game->event.type == sfEvtClosed)
                sfRenderWindow_close(game->window);
        }
        count_score(game);
        all_clock(game);
        sfRenderWindow_display(game->window);
        draw_sprite(game);
    }
    sfRenderWindow_destroy(game->window);
    free (game);
}