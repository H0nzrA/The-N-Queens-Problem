#include "../inc/header.h"

int is_sign(char c)
{
    return (c == '-' || c == '+');
}

int is_whitespace(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

int is_num(char c)
{
    return (c >= '0' && c <= '9');
}

int     ft_atoi(char* str)
{
    long nbr = 0;
    int sign = 1;
    int i = 0;

    while (str[i] != '\0' && is_whitespace(str[i]))
        i++;
    while (str[i] != '\0' && is_sign(str[i]))
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] != '\0' && is_num(str[i]))
    {
        nbr *= 10;
        nbr += str[i] - '0';
        i++;
    }
    return (nbr * sign);
}