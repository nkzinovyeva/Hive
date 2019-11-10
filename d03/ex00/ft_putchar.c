#include <unistd.h>

int ft_putchar(int c)
{
    write(1, &c, 2);
    return (0);
}

