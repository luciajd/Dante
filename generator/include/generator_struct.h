/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Write your my.h header file that contains the
** prototypes of all the functions exposed by your libmy.a
*/

#ifndef GENERATOR_STRUCT_H_
    #define GENERATOR_STRUCT_H_

    typedef struct l_info {
        int y;
        int x;
        bool down_valid;
        bool up_valid;
        bool right_valid;
        bool left_valid;
        int perfect;
        char **map;
    } s_info;

    typedef struct l_stack {
        int x;
        int y;
        struct l_stack *next;
        struct l_stack *previus;
    } s_stack;

#endif
