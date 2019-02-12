/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:28:39 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 11:03:59 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_eight_queens_puzzle_2(void);

void	test_01(void)
{
	clock_t	time0;
	clock_t	time1;

	printf("d04 ex09 test_01 -- ");
	time0 = clock();
	ft_eight_queens_puzzle_2();
	time1 = clock();
	printf("Time: %lus\n", (time1 -time0) / CLOCKS_PER_SEC);
}

int		main(void)
{
	test_01();
	return (0);
}
