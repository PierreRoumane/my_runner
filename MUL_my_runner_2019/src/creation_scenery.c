/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** creation_UI.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "runner.h"

sfRenderWindow *createMyWindow(int width, int height, char *title)
{
    sfVideoMode data = {width, height, 32};
    sfRenderWindow *game = sfRenderWindow_create
    (data, title, sfDefaultStyle, NULL);
    sfRenderWindow_clear(game, sfBlack);
    sfRenderWindow_display(game);
    return (game);
}

background_s *create_background(void)
{
    background_s *back = malloc(sizeof(background_s));
    back->ground = sfSprite_create();
    back->back = sfSprite_create();
    back->sky = sfSprite_create();
    sfSprite_setTexture(back->ground,
    sfTexture_createFromFile(FILEPATH_GROUND, NULL),
    sfFalse);
    sfSprite_setTexture(back->back,
    sfTexture_createFromFile(FILEPATH_BACK, NULL),
    sfFalse);
    sfSprite_setTexture(back->sky,
    sfTexture_createFromFile(FILEPATH_SKY, NULL),
    sfFalse);
    set_background(back);
    return (back);
}