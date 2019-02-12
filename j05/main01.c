#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	int i;
	
	i = -42;
	while (i <= 42)
	{
		ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	ft_putnbr(INT_MIN);
}
