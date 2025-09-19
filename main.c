#include <unistd.h>

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

int     is_safe()
{

    return (0);
}

int     ft_ten_queen_puzzle(void)
{

}

int main()
{
    ft_putstr("The N Queens Problem\n");
    return 0;
}