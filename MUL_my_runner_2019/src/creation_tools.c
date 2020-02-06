/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** creation_tools
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "runner.h"

character_s *create_sprite(char *filepath)
{
    sfVector2f p_position =
    {STANDARD_WIDTH/2 - 200, STANDARD_HEIGHT -SCALE_PLAYER * 50};
    character_s *chara = malloc(sizeof(character_s));
    chara->sprite = sfSprite_create();
    chara->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(chara->sprite, chara->texture, sfFalse);
    sfSprite_setPosition(chara->sprite, p_position);
    return (chara);
}

character_s *create_enemy(char *filepath)
{
    sfVector2f e_position =
    {STANDARD_WIDTH + 20, STANDARD_HEIGHT - SCALE_PLAYER * 50};
    character_s *chara = malloc(sizeof(character_s));
    chara->sprite = sfSprite_create();
    chara->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(chara->sprite, chara->texture, sfFalse);
    sfSprite_setPosition(chara->sprite, e_position);
    return (chara);
}

rect_s *create_rect(int left, int top, int width, int height)
{
    rect_s *rect_chara = malloc(sizeof(rect_s));

    rect_chara->rect.left = left;
    rect_chara->rect.height = height;
    rect_chara->rect.top = top;
    rect_chara->rect.width = width;
    rect_chara->start = left;
    return (rect_chara);
}

sfMusic *create_music(char *filepath)
{
    sfMusic *gng = sfMusic_createFromFile(filepath);
    sfMusic_setLoop(gng, sfTrue);
    sfMusic_play(gng);
    return (gng);
}