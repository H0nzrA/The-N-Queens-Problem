#include "All_function.h"
#include <stdlib.h>
#include <stdio.h>
int     main(int argc, char** argv)
{
    argc--;
    if (argc != 1)
        return 0;

    int N;
    int *board;

    ft_putstr("The N queens problems\n\n");
    ft_putstr("Value of N = ");
    scanf("%d", &N);

    board = (int)malloc(N * sizeof(int));

    int i = 0;
    while (i < N)
    {
        *(board + i) = -1;
        i++;
    }
}