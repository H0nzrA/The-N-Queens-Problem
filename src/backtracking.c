#include "../inc/header.h"

int     is_valid_case(char** board, int posX, int posY, int size)
{
    int i;
    int j;

    if (board[posX][posY] == Q)
        return (0);

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (i == posX && board[i][j] == Q)
                return (0);
            if (j == posY && board[i][j] == Q)
                return (0);
            if ((i - j == posX - posY) && board[i][j] == Q)
                return (0);
            if ((i + j == posX + posY) && board[i][j] == Q)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int     is_backtracking(char** board, int row, int size)
{
    int col = 0;

    if (row >= size)
        return (1);

    while (col < size)
    {
        if (is_valid_case(board, row, col, size))
        {
            board[row][col] = Q;

            if (is_backtracking(board, row + 1, size))
                return (1);

            board[row][col] = E;
        }
        col++;
    }
    return (0);
}

void    solve_backtrack(char** board, int size)
{
    if (is_backtracking(board, 0, size))
        ft_putstr("Found solution\n");
    else
        ft_putstr("404 - Solution not found\n");
}