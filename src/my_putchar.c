/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** my_putchar_prt is for my_printf
*/

#include <unistd.h>

int my_putchar(char c)
{
    return write(1, &c, 1);
}
