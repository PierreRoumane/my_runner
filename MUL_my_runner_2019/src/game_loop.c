/*
** EPITECH PROJECT, 2020
** my_runner.c
** File description:
** win_loop.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "runner.h"
#include "my.h"

void my_runner(void)
{
    sfBool jump = sfFalse;
    sfRenderWindow *win = createMyWindow
    (STANDARD_WIDTH, STANDARD_HEIGHT, "my_runner");
    character_s *character = create_sprite(FILEPATH_CHARACTER);
    character_s *enemy = create_enemy(FILEPATH_ENEMY);
    background_s *background = create_background();
    rect_s *rect_chara_walk = create_rect(122, 35, 21, 35);
    rect_s *rect_chara_jump = create_rect(150, 67, 35, 30);
    sfMusic *Music = create_music(FILEPATH_MUSIC);
    sfClock *clock = sfClock_create();
    while (sfRenderWindow_isOpen(win)
    && sfKeyboard_isKeyPressed(sfKeyEscape) == sfFalse) {
        if (sfClock_getElapsedTime(clock).microseconds > TIME_STAMP) {
            sfRenderWindow_clear(win, sfBlack);
            paralax_exe(win, background);
            if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue || jump == sfTrue)
                jumping_animation(win, rect_chara_jump, character, &jump);
            else
                walking_animation(win, rect_chara_walk, character);
            sfClock_restart(clock);}
        sfRenderWindow_display(win); }
    cleanup(rect_chara_jump, rect_chara_walk, character, Music);
}