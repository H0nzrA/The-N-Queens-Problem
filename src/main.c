#include "../inc/header.h"

int main(int argc, char** argv)
{
    char**  board;
    int     size;

    if (argc != 2)
        return (0);
    size = ft_atoi(argv[1]);
    if (size > 25)
    {
        ft_putstr("Too much size\n");
        return (1);
    }
    board = initialize_board(size);
    solve_backtrack(board, size);
    print_board(board);
    free_board(board);
}