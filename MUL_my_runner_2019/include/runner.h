/*
** EPITECH PROJECT, 2019
** hunter.h
** File description:
** ver2
*/


#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

#define FILEPATH_CHARACTER ("data/gng.png")
#define FILEPATH_MUSIC ("data/gng.wav")
#define FILEPATH_SKY ("data/sky.png")
#define FILEPATH_BACK ("data/back.png")
#define FILEPATH_GROUND ("data/ground.png")
#define FILEPATH_ENEMY ("data/enemy.png")

#define LEFT_JUMPING (150)
#define LEFT_WALKING (122)
#define TIME_STAMP (70000)
#define SIZE_ZOMBIE (3)
#define SIZE_PLANT (5)
#define SIZE_DEMON (2)
#define SIZE_PLAYER (4)
#define SCALE_PLAYER (3)
#define JUMP_HEIGHT (SCALE_PLAYER * 25)
#define STANDARD_HEIGHT (600)
#define STANDARD_WIDTH (800)

typedef struct character_t{
    sfSprite *sprite;
    sfTexture *texture;
} character_s;

typedef struct rect_t {
    sfIntRect rect;
    int start;
    int end;
} rect_s;

typedef struct background_t {
    sfSprite *sky;
    sfSprite *back;
    sfSprite *ground;
} background_s;

typedef struct enemy_t {
    sfSprite *sprite;
    sfTexture *texture;
} enemy_s;

//main.c
void my_runner(void);
void print_helper(void);

//creation_tools.c
sfRenderWindow *createMyWindow(int witdh, int lenght, char *title);
character_s *create_sprite(char *filepath);
rect_s *create_rect(int left, int top, int width, int height);
sfMusic *create_music(char *filepath);
background_s *create_background();

//sprite_management.c
void draw_sprite(sfRenderWindow *win, rect_s *walk, character_s *character);
void paralax_exe(sfRenderWindow *win, background_s *back);

void jumping_animation(sfRenderWindow *win, rect_s *jump,
character_s *character, sfBool *jumping);

void walking_animation(sfRenderWindow *win,
rect_s *rect_chara_walk,
character_s *character);

//cleanup.c
void cleanup(rect_s *rect1, rect_s *rect2, character_s *chara, sfMusic *gng);

//creation_modifiers
void set_background(background_s *back);