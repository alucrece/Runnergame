/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCE-1-1-myrunner-vanelle-lucrece.aliebong-zeukeng
** File description:
** my_runner.h
*/

#ifndef MY_RUNNER_H_
#define MY_RUNNER_H_

#define BPP (32)

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/Audio/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>

typedef struct start
{
    int step;
    int dead;
    int score;

    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *texture_sky;
    sfSprite *sprite_sky;
    sfEvent event;
    sfMusic* music;

    sfSound *sound;
    sfSoundBuffer *buffer;

    sfTexture *texture_char;
    sfSprite *sprite_char;
    sfIntRect size_rect;
    sfVector2f pos_char;
    sfClock *clock_char;

    sfTexture *texture_snow;
    sfSprite *sprite_snow;
    sfIntRect size_snow;
    sfVector2f pos_snow;
    sfClock *clock_snow;

    sfTexture *texture_snow1;
    sfSprite *sprite_snow1;
    sfIntRect size_snow1;
    sfVector2f pos_snow1;
    sfClock *clock_snow1;

    sfTexture *texture_ground;
    sfSprite *sprite_ground;
    sfIntRect size_ground;
    sfVector2f pos_ground;
    sfClock *clock_gd;

    sfTexture *texture_ground1;
    sfSprite *sprite_ground1;
    sfIntRect size_ground1;
    sfVector2f pos_ground1;
    sfClock *clock_gd1;

    sfTexture *texture_mid;
    sfSprite *sprite_mid ;
    sfIntRect size_mid;
    sfVector2f pos_mid;
    sfClock *clock_mid;

    sfTexture *texture_mid1;
    sfSprite *sprite_mid1 ;
    sfIntRect size_mid1;
    sfVector2f pos_mid1;
    sfClock *clock_mid1;

    sfTexture *texture_fg;
    sfSprite *sprite_fg;
    sfIntRect size_fg;
    sfVector2f pos_fg;
    sfClock *clock_fg;

    sfTexture *texture_fg1;
    sfSprite *sprite_fg1;
    sfIntRect size_fg1;
    sfVector2f pos_fg1;
    sfClock *clock_fg1;

    sfTexture *texture_bg;
    sfSprite *sprite_bg;
    sfIntRect size_bg;
    sfVector2f pos_bg;
    sfClock *clock_bg;

    sfTexture *texture_bg1;
    sfSprite *sprite_bg1;
    sfIntRect size_bg1;
    sfVector2f pos_bg1;
    sfClock *clock_bg1;

    sfTexture *texture_obstacle;
    sfSprite *sprite_obstacle;
    sfIntRect size_obstacle;
    sfVector2f pos_obstacle;
    sfClock *clock_obstacle;

    char *strm;
    sfFont *font_menu;
    sfVector2f pos_menu;
    sfTexture *texture_menu;
    sfSprite *sprite_menu;
    sfText *text_menu;

    sfTexture *texture_score;
    sfSprite *sprite_score;
    sfVector2f pos_score;
    sfIntRect size_score;

    sfFont *font_count;
    sfVector2f pos_count;
    sfTexture *texture_count;
    sfSprite *sprite_count;
    sfText *text_count;

    sfFont *font_options;
    sfVector2f pos_options;
    sfTexture *texture_options;
    sfSprite *sprite_options;
    sfText *text_options;

    sfFont *font_pause;
    sfVector2f pos_pause;
    sfTexture *texture_pause;
    sfSprite *sprite_pause;
    sfText *text_pause;

    sfFont *font_opt;
    sfVector2f pos_opt;
    sfTexture *texture_opt;
    sfSprite *sprite_opt;
    sfText *text_opt;

    sfFont *font_win;
    sfVector2f pos_win;
    sfText *text_win;
    sfTexture *texture_win;
    sfSprite *sprite_win ;

    sfTexture *texture_tester;
    sfSprite *sprite_tester;
    char *strw;

    sfFont *font_lose;
    sfVector2f pos_lose;
    sfText *text_lose;
    sfTexture *texture_lose;
    sfSprite *sprite_lose;
    char *strl;

    sfTexture *texture_button;
    sfSprite *sprite_button;
    sfIntRect size_button;
    sfVector2f pos_button;
    sfClock *clock_button;

    sfVector2f pos_option;
    sfVector2f pos_exit;
    sfVector2f pos_play;
    int button_width;
    int button_height;
    sfIntRect *play_button_rect;
    sfIntRect *option_button_rect;
    sfIntRect *exit_button_rect;

} start_t;

void click_bottom_play(start_t *game);
int main(int ac, char **av);
void my_putchar (char c);
int my_putstr(char const *str);
void my_runner(start_t *game);
void sound(start_t *game);

void window(start_t *game);
void sky(start_t *game);
void bg(start_t *game);
void middle(start_t *game);
void foreground(start_t *game);
void snow(start_t *game);
void ground_01(start_t *game);
void move_sprite(start_t *game);

void clock(start_t *game);
void all_function(start_t *game);
void draw_sprite(start_t *game);
void menu(start_t *game);
void text_menu(start_t *game);

void clock_sprite(start_t *game);
void obstacle(start_t *game);
void clock_obstacle(start_t *game);
void clock_ground(start_t *game);
void ground_02(start_t *game);
void clock_ground1(start_t *game);
void clock_mid(start_t *game);
void middle1(start_t *game);
void clock_mid1(start_t *game);
void clock_fg(start_t *game);
void foreground1(start_t *game);
void clock_fg1(start_t *game);
void clock_snow(start_t *game);
void snow1(start_t *game);
void clock_snow1(start_t *game);
void clock_bg(start_t *game);
void bg1(start_t *game);
void clock_bg1(start_t *game);
void all_clock(start_t *game);
void options(start_t *game);

void win_game(start_t *game);
void lose(start_t *game);
void play_button(start_t *game);
void score_game(start_t *game);
void count_score(start_t *game);
char *my_display_score(int nb);
void render_step(start_t *game);
void text_pause(start_t *game);
void text_options(start_t *game);
void lose_game(start_t *game);
void music(start_t *game);

#endif    /* MY_RUNNER_H_ */