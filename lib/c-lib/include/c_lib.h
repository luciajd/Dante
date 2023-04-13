/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** prototypes
*/

#ifndef C_LIB_H
    #define C_LIB_H

    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <string.h>
    #include <signal.h>
    #include <stdarg.h>
    #include <sys/wait.h>
    #include <string.h>
    #include <sys/types.h>
    #include <time.h>

    void my_putchar(char c);
    void my_putstr(char *str);
    int	my_get_nbr(char *str);
    int my_put_nbr(int x);
    int my_strlen(char *str);
    int my_strcmp(char *str_1, char *str_2);
    char **my_str_to_word_array(char *str, char separator);
    char *my_strcpy(char *dest, char const *src);
    int my_strlen_mod(char *str, int index);
    int my_bsn_count(char *str);
    char *my_strdup(char *src);
    int my_dict_length(char * str , int index);
    int my_ascii_length(char * str , int index);
    int my_cut(char *str, char *sub_str);
    char *str_cleaner(char *dirty_str);
    char *my_strcat(char *dest, char *concatenate);
    bool is_int(char *digit_char);

#endif
