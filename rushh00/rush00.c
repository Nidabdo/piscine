#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rush(int x, int y)
{
    while (x > 0)
    {
        ft_putchar('-');
    }

}

int main(void)
{
    rush(3, 0);
    return (0);
}