/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** prototypes
*/

#ifndef LIB_H_
    #define LIB_H_

    #include "c_lib.h"
    #include <stdbool.h>
    #include "file_struct.h"
    #include "solver_struct.h"
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>

    int help(int ac, char **av);
    s_info *init_info(void);
    int parser(char **av, s_info *info);
    void print_solved_maze(s_info *info);
    bool do_dfs(s_info *info, s_stack *head_stack);
    s_stack *do_moves(s_info *info, s_stack *temp, bool *path);
    s_stack *go_right(s_info *info, s_stack *temp, bool *path);
    s_stack *go_down(s_info *info, s_stack *temp, bool *path);
    s_stack *go_up(s_info *info, s_stack *temp, bool *path);
    s_stack *go_left(s_info *info, s_stack *temp, bool *path);
    void *to_last_node(s_stack *curr);
    s_stack *init_stack_node(int x, int y);
    int free_node(s_stack **head, s_stack **tail, s_stack *to_free);
    void *create_last_node(s_stack *curr, int x, int y);
    int node_counter(s_stack *curr);
    bool do_dfs(s_info *info, s_stack *head_stack);
    int valid_neighbours(s_info *info, s_stack *temp);

#endif
