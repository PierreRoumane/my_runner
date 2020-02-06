/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** main.c
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#include "runner.h"
#include "my.h"

int main(int argc, char **argv)
{
    if (argc != 1 &&
    argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0')
        print_helper();
    else if (argc == 2)
        my_runner();
    else
        return (0);
}

void print_helper(void)
{
    my_putstr("Finite runner created with CSFML.\n");
    my_putstr("\n");
    my_putstr("USAGE\n");
    my_putstr(" ./my_runner map.txt\n");
    my_putstr("\n\n");
    my_putstr("OPTIONS\n");
    my_putstr(" -i                launch the game in infinity mode.\n");
    my_putstr(" -h                print the usage and quit.\n");
    my_putstr("\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr(" SPACE_KEY        jump.\n");
}