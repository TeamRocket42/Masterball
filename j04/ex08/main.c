/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:25:09 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 11:00:02 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int		ft_eight_queens_puzzle(void);

void	test_01(void)
{
	clock_t	time0;
	clock_t	time1;

	printf("d04 ex08 test_01 -- ");
	time0 = clock();
	printf("Output: %d, ", ft_eight_queens_puzzle());
	time1 = clock();
	printf("Expected: %d, ", 92);
	printf("Time: %lus\n", (time1 - time0) / CLOCKS_PER_SEC);
}

int		main()
{
	test_01();
	return (0);
}
