#include "../inc/header.h"

char**    initialize_board(int size)
{
    char**  board;
    int     i;
    int     j;

    board = (char**) malloc((size + 1) * sizeof(char*));
    i = 0;
    while (i < size)
    {
        j = 0;
        board[i] = (char*) malloc((size + 1) * sizeof(char));
        while (j < size)
            board[i][j++] = E;
        board[i][j] = '\0';
        i++;
    }
    board[i] = 0;
    return (board);
}

void    free_board(char** board)
{
    int i =0;

    while (board[i] != 0)
        free(board[i++]);
    free(board);
}

void    print_board(char** board)
{
    int i = 0;
    int j = 0;

    while (board[i] != 0)
    {
        j = 0;
        while (board[i][j] != '\0')
        {
            ft_putchar(board[i][j]);
            if (board[i][j + 1] != '\0')
                ft_putstr(SEP);
            j++;
        }
        ft_putstr("\n");
        i++;
    }
}