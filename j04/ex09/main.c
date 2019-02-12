/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:28:39 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 10:31:43 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

void	ft_eight_queens_puzzle_2(void);

void	test_01(void)
{
	clock_t	time0;
	clock_t	time1;

	printf("d04 ex09 test_01 -- ");
	ft_eight_queens_puzzle_2();
}

int		main(void)
{
	test_01();
	return (0);
}
