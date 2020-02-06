/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** sprite_management
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "runner.h"
#include "my.h"

void draw_sprite(sfRenderWindow *win, rect_s *walk, character_s *character)
{
    sfVector2f scale = {SCALE_PLAYER, SCALE_PLAYER};

    sfSprite_setScale(character->sprite, scale);
    sfSprite_setTextureRect(character->sprite, walk->rect);
    sfRenderWindow_drawSprite(win, character->sprite, NULL);
}

void jumping_animation(sfRenderWindow *win, rect_s *jump_rect,
character_s *jumping, sfBool *jump)
{
    sfVector2f p_position = {0, -30};
    sfVector2f inverse_p = {0, 30};
    *jump = sfTrue;
    static int counter = (int) 0;
    static sfBool jump_frame = sfFalse;

    if (counter <= JUMP_HEIGHT && jump_frame == sfFalse) {
        counter = counter + 15;
        sfSprite_move(jumping->sprite, p_position);
        if (counter == JUMP_HEIGHT)
            jump_frame = sfTrue;
    }
    else if (counter != 0) {
        sfSprite_move(jumping->sprite, inverse_p);
        counter = counter - 15;
    }
    else {
        *jump = sfFalse;
        jump_frame = sfFalse;}
    sfSprite_setTextureRect(jumping->sprite, jump_rect->rect);
    sfRenderWindow_drawSprite(win, jumping->sprite, NULL);
}

void walking_animation(sfRenderWindow *win,
rect_s *rect_chara_walk,
character_s *character)
{
    static int offset = 0;
    draw_sprite(win, rect_chara_walk, character);
    offset++;
    rect_chara_walk->rect.left =
    rect_chara_walk->rect.left + 25;
    if (offset == SIZE_PLAYER)
    {
        rect_chara_walk->rect.left =
        rect_chara_walk->start;
        offset = 0;
    }
}

void paralax_exe(sfRenderWindow *win, background_s *background)
{
    sfVector2f offset_sky = {-1, 0};
    sfVector2f offset_back = {-5, 0};
    sfVector2f offset_ground = {-20, 0};

    sfSprite_move(background->sky, offset_sky);
    sfSprite_move(background->back, offset_back);
    sfSprite_move(background->ground, offset_ground);
    sfRenderWindow_drawSprite(win, background->sky, NULL);
    sfRenderWindow_drawSprite(win, background->back, NULL);
    sfRenderWindow_drawSprite(win, background->ground, NULL);
}