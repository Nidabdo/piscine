#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rush(int x, int y)
{
    int hor;
    int ver;

    hor = 0;
    //boucle horizontal
    while (x > hor)
    {
        if (hor == 0 || hor == x-1)
        {
            ft_putchar('o');
        }
        else
        {
            ft_putchar('-');
        }
        hor++;
    }
    ft_putchar('\n');

    //boucle vertical
    ver = 1;
    while (ver < y - 1)
    {
        ft_putchar('|');
        hor = 1;
        while (hor < x - 1)
        {
            ft_putchar(' ');
            hor++;
        }
        if (x > 1)
            ft_putchar('|');
        ft_putchar('\n');
        ver++;
    }
    //boucle horizontal du bas
    if (y > 1)
    {
        hor = 0;
        while (hor < x)
        {
            if (hor == 0 || hor == x - 1)
                ft_putchar('o');
            else
                ft_putchar('-');
            hor++;
        }
        ft_putchar('\n');
    }
}

int main(void)
{
    rush(5, 5);
    return (0);
}