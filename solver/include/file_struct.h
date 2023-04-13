/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Write your my.h header file that contains the
** prototypes of all the functions exposed by your libmy.a
*/

#ifndef FILE_H_
    #define FILE_H_

    typedef struct l_file {
        int fd;
        int read_size;
        int file_size;
        int (*open_file)(struct l_file *, char *path);
        int (*close_file)(struct l_file *);
        char *(*get_content)(struct l_file *);
    } s_file;

    s_file *create_file(void);

#endif
