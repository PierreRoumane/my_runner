/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** cleanup
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "runner.h"
#include "my.h"

void cleanup(rect_s *rect1, rect_s *rect2, character_s *chara, sfMusic *gng)
{
    free(rect1);
    free(rect2);
    sfSprite_destroy(chara->sprite);
    sfTexture_destroy(chara->texture);
    sfMusic_destroy(gng);
}