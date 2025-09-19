#include "All_function.h"

int     is_safe(int *board, int N, int pos_row, int pos_col)
{
    int i = 0;
    int j = 0;
    int piece;

    while (i < N)
    {
        if (i == pos_row && board[i] == pos_col) // Position already taken
            return 0;
        j = 0;
        piece = board[i];
        while (j < N)
        {
            
            j++;
        }
        i++;
    }

    return 1;
}