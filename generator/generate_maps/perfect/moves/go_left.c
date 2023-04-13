/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** go_position
*/

#include "generator_lib.h"

s_stack *go_left(s_info *info, s_stack *temp)
{
    if (temp->x > 1 && info->map[temp->y][temp->x - 2] != '*'
    && info->map[temp->y][temp->x - 2] != '\0') {
        info->map[temp->y][temp->x - 1] = '*';
        temp = create_last_node(temp, temp->x - 2, temp->y);
    }
    return (temp);
}
