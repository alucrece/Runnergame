/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** menu.c
*/

#include "../include/my_runner.h"

void menu(start_t *game)
{
    game->texture_menu = sfTexture_createFromFile("./Layers/bgnoel.jpg", NULL);
    game->sprite_menu = sfSprite_create();
    sfSprite_setTexture(game->sprite_menu, game->texture_menu, sfTrue);
    play_button(game);
}

void play_button(start_t *game)
{
    game->button_width = 380;
    game->button_height = 96;
    game->texture_button = sfTexture_createFromFile("Layers/bgmenu.png", NULL);
    game->sprite_button = sfSprite_create();
    sfSprite_setTexture(game->sprite_button, game->texture_button, sfTrue);
    game->pos_button.x = 100;
    game->pos_button.y = 200;
    game->pos_play.x = 100;
    game->pos_play.y = 280;
    game->pos_option.x = 100;
    game->pos_option.y = 400;
    game->pos_exit.x = 100;
    game->pos_exit.y = 540;
    game->size_button.width = 518;
    game->size_button.height = 482;
    sfSprite_setTextureRect(game->sprite_button, game->size_button);
    sfSprite_setPosition(game->sprite_button, game->pos_button);
}

void click_bottom_play(start_t *game)
{
    sfIntRect *mouse = malloc(sizeof(*mouse));
    sfIntRect *play_button_rect = malloc(sizeof(*play_button_rect));
    sfIntRect *option_button_rect = malloc(sizeof(*option_button_rect));
    sfIntRect *exit_button_rect = malloc(sizeof(*exit_button_rect));

    mouse->left = sfMouse_getPositionRenderWindow(game->window).x;
    mouse->top = sfMouse_getPositionRenderWindow(game->window).y;
    mouse->width = 1;
    mouse->height = 1;
    play_button_rect->left = game->pos_play.x;
    play_button_rect->top = game->pos_play.y;
    play_button_rect->width = game->button_width;
    play_button_rect->height = game->button_height;
    option_button_rect->left = game->pos_option.x;
    option_button_rect->top = game->pos_option.y;
    option_button_rect->width = game->button_width;
    option_button_rect->height = game->button_height;
    exit_button_rect->left = game->pos_exit.x;
    exit_button_rect->top = game->pos_exit.y;
    exit_button_rect->width = game->button_width;
    exit_button_rect->height = game->button_height;
    if (sfIntRect_intersects(mouse, play_button_rect, NULL))
        game->size_button.left = 4;
    else
        game->size_button.left = 0;
    sfSprite_setTextureRect(game->sprite_button, game->size_button);
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (sfIntRect_intersects(mouse, play_button_rect, NULL))
                game->step = 1;
        if (sfIntRect_intersects(mouse, option_button_rect, NULL)) {
                game->step = 3;
        }
        if (sfIntRect_intersects(mouse, exit_button_rect, NULL)) {
                game->event.type = sfEvtClosed;
                sfRenderWindow_close(game->window);
        }
    }
}

void text_menu(start_t *game)
{
    game->strm = "WELCOME !!\n\n MY_RUNNER";
    game->font_menu = sfFont_createFromFile("police/E-Muse-Bold.otf");
    game->text_menu = sfText_create();
    sfText_setCharacterSize(game->text_menu, 50);
    sfText_setString(game->text_menu, game->strm);
    sfText_setFont(game->text_menu, game->font_menu);
    game->pos_menu.x = 700;
    game->pos_menu.y = 400;
    sfText_setPosition(game->text_menu, game->pos_menu);
}