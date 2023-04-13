/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** rondom int value in range 0 - x
*/

#include "generator_lib.h"

int rand_in_range(int x)
{
    int rand_int = rand() % x;

    return (rand_int);
}
