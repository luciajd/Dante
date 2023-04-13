/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** generate_maps
*/

#include "generator_lib.h"

int generate_perfect(s_info *info, s_stack *head_stack)
{
    s_stack *temp = head_stack;
    temp = create_last_node(temp, 0, 0);

    while (node_counter(head_stack) > 0) {
        info->map[temp->y][temp->x] = '*';
        if (valid_neighbour(info, temp) == true) {
            temp = do_moves(info, temp);
            info->down_valid = false;
            info->up_valid = false;
            info->left_valid = false;
            info->right_valid = false;
        } else
            free_node(&head_stack, &temp, temp);
    }
    return (0);
}
