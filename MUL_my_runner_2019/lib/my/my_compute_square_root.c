/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** my_computer_square_root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int i = 0;
    int check = false;

    if (nb < 0)
        return (0);
    while (i <= nb)
    {
        if (i * i == nb)
        {
            return (i);
            check = true;
        }
        i++;
    }
    if (check == false)
        return (0);
    return (0);
}
