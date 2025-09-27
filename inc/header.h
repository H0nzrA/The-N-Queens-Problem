#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>

#define E '.'
#define Q 'Q'
#define SEP " "

// Display functions
void    ft_putchar(char c);
void    ft_putstr(char* str);
void    ft_putnbr(int nbr);

// Solve by Backtracking algorithm
void    solve_backtrack(char** board, int size);

// Board function
char**    initialize_board(int size);
void    free_board(char** board);
void    print_board(char** board);

// Utils
int     ft_atoi(char* str);

#endif 