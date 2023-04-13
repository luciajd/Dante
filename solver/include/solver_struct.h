/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Write your my.h header file that contains the
** prototypes of all the functions exposed by your libmy.a
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct l_info {
        int num_rows;
        int num_cols;
        char **map;
    } s_info;

    typedef struct l_stack {
        int x;
        int y;
        struct l_stack *next;
        struct l_stack *previus;
    } s_stack;

#endif
