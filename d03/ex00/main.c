#include "ft_ft.c"
#include "ft_putchar.c"

void	ft_ft(int *nbr);

int ft_putchar(int c);

int	main(void)
{
	int a;

	a = 5;
	ft_ft(&a);
	ft_putchar(a);
    return (0);
}

