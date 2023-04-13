/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** returns true if a string is a representation of a number
*/

#include "c_lib.h"

bool is_int(char *digit_char)
{
    int index = 0;

    if (digit_char[index] == '-')
        index++;
    while (digit_char[index]) {
        if (digit_char[index] < '0' || digit_char[index] > '9')
            return (false);
        index++;
    }
    return (true);
}
