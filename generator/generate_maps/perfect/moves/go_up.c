/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** go_position
*/

#include "generator_lib.h"

s_stack *go_up(s_info *info, s_stack *temp)
{
    if (temp->y > 1 && info->map[temp->y - 2][temp->x] != '*'
    && info->map[temp->y - 2][temp->x] != '\0') {
        info->map[temp->y - 1][temp->x] = '*';
        temp = create_last_node(temp, temp->x, temp->y - 2);
    }
    return (temp);
}
