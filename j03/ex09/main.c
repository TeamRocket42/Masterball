/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 20:03:41 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 10:58:54 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while ((c = str[i++]) != '\0')
		ft_putchar(c);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_nat;

	if (nb < 0)
		ft_putchar('-');
	nb_nat = (nb < 0) ? -nb : nb;
	if (nb_nat > 9)
		ft_putnbr(nb_nat / 10);
	ft_putchar(nb_nat % 10 + '0');
}

void	ft_print_integer_table(int *tab, int size)
{
	int		i;
	
	i = -1;
	ft_putstr("{ ");
	while (++i < size - 1)
	{
		ft_putnbr(tab[i]);
		ft_putstr(", ");
	}
	ft_putnbr(tab[size - 1]);
	ft_putstr(" }");
}

void	test_01(void)
{
	int tab[0] = { };
	int size = 0;
	
	ft_putstr("d03 ex09 test_01 -- ");
	ft_putstr("Input: ");
	ft_print_integer_table(tab, size);
	ft_sort_integer_table(tab, size);
	ft_putstr(", Output: ");
	ft_print_integer_table(tab, size);
	ft_putstr(", Expected: {  }\n");
}

void	test_02(void)
{
	int tab[1] = {-42};
	int size = 1;
	
	ft_putstr("d03 ex09 test_02 -- ");
	ft_putstr("Input: ");
	ft_print_integer_table(tab, size);
	ft_sort_integer_table(tab, size);
	ft_putstr(", Output: ");
	ft_print_integer_table(tab, size);
	ft_putstr(", Expected: { -42 }\n");
}

void	test_03(void)
{
	int tab[2] = {42, -42};
	int size = 2;
	
	ft_putstr("d03 ex09 test_03 -- ");
	ft_putstr("Input: ");
	ft_print_integer_table(tab, size);
	ft_sort_integer_table(tab, size);
	ft_putstr(", Output: ");
	ft_print_integer_table(tab, size);
	ft_putstr(", Expected: { -42, 42 }\n");
}

void	test_04(void)
{
	int tab[5] = {17, 3, 0, 24, 2};
	int size;
	
	ft_putstr("d03 ex09 test_04 -- ");
	size = 5;
	ft_putstr("Input: ");
	ft_print_integer_table(tab, size);
	ft_sort_integer_table(tab, size);
	ft_putstr(", Output: ");
	ft_print_integer_table(tab, size);
	ft_putstr(", Expected: { 0, 2, 3, 17, 24 }\n");
}

void	test_05(void)
{
	int tab[21] = {21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = 21;
	
	ft_putstr("d03 ex09 test_05 -- ");
	ft_putstr("Input: ");
	ft_print_integer_table(tab, size);
	ft_sort_integer_table(tab, size);
	ft_putstr(", Output: ");
	ft_print_integer_table(tab, size);
	ft_putstr(", Expected: { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 }\n");
}

int		main(void)
{
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	return (0);
}
