/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** creation_modifiers.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "runner.h"

void set_background(background_s *back)
{
    sfVector2f position_back = {0, 300};
    sfVector2f position_ground = {0, 560};
    sfVector2f position_sky = {0, 0};

    sfSprite_setPosition(back->sky, position_sky);
    sfSprite_setPosition(back->back, position_back);
    sfSprite_setPosition(back->ground, position_ground);
}