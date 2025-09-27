#include "../inc/header.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char* str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

void    ft_putnbr(int nbr)
{
    long    n;

    n = nbr;
    if (n < 0)
    {
        n = -n;
        ft_putstr("-");
    }
    if (n > 10)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + '0');
}