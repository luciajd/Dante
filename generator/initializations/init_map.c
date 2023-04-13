/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** init_map
*/

#include "generator_lib.h"

void init_map(s_info *info)
{
    int x = 0;
    int y = 0;

    info->map = malloc(sizeof(char *) * (info->y + 1));
    while (y < info->y) {
        info->map[y] = malloc(sizeof(char) * (info->x + 1));
        y++;
    }
    info->map[y] = NULL;
    y = 0;
    x = 0;
    while (y < info->y) {
        while (x < info->x) {
            info->map[y][x] = 'X';
            x++;
        }
        info->map[y][x] = '\0';
        x = 0;
        y++;
    }
}
