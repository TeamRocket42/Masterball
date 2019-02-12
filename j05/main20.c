/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:50:02 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 12:44:55 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr_base(int nb, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char base[] = "0123456789ABCDEF";
	char base2[] = "";
	char base3[] = "1";
	char base4[] = "+123";
	char base5[] = "123	456";
	ft_putnbr_base(INT_MIN, base);
	ft_putnbr_base(INT_MIN, base2);
	ft_putnbr_base(INT_MIN, base3);
	ft_putnbr_base(INT_MIN, base4);
	ft_putnbr_base(INT_MIN, base5);

}
