/*
** EPITECH PROJECT, 2023
** B-CPE-110-BAR-1-1-solver-joan-pau.merida-ruiz
** File description:
** generator_lib
*/

#ifndef GENERATOR_LIB_H_
    #define GENERATOR_LIB_H_

    #include "c_lib.h"
    #include "generator_struct.h"

    int help(int ac, char **av);
    void init_map(s_info *info);
    s_info *init_info(int ac, char **av);
    s_stack *init_stack_node(int x, int y);
    int rand_in_range(int x);
    int error_handler(int ac, char **av);
    int generate_maps(s_info *info, s_stack *stack);
    int generate_perfect(s_info *info, s_stack *stack);
    int generate_imperfect(s_info *info);
    void *create_last_node(s_stack *curr, int x, int y);
    int free_node(s_stack **head, s_stack **tail, s_stack *to_free);
    int node_counter(s_stack *curr);
    void *to_last_node(s_stack *curr);
    s_stack *do_moves(s_info *info, s_stack *temp);
    s_stack *go_left(s_info *info, s_stack *temp);
    s_stack *go_right(s_info *info, s_stack *temp);
    s_stack *go_up(s_info *info, s_stack *temp);
    s_stack *go_down(s_info *info, s_stack *temp);
    bool valid_neighbour(s_info *info, s_stack *curr);
    void last_lines_handler(s_info *info);
    void print_map(s_info *info);

#endif
