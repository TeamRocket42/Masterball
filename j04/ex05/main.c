/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:14:46 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 10:53:19 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int		ft_sqrt(int nb);

void	test_01(void)
{
	printf("d04 ex05 test_01 -- ");
	printf("Input: %d, ", -1);
	printf("Output: %d, ", ft_sqrt(-1));
	printf("Expected: %d\n", 0);
}

void	test_02(void)
{
	printf("d04 ex05 test_02 -- ");
	printf("Input: %d, ", 0);
	printf("Output: %d, ", ft_sqrt(0));
	printf("Expected: %d\n", 0);
}

void	test_03(void)
{
	printf("d04 ex05 test_03 -- ");
	printf("Input: %d, ", 1);
	printf("Output: %d, ", ft_sqrt(1));
	printf("Expected: %d\n", 1);
}

void	test_04(void)
{
	printf("d04 ex05 test_04 -- ");
	printf("Input: %d, ", 25);
	printf("Output: %d, ", ft_sqrt(25));
	printf("Expected: %d\n", 5);
}

void	test_05(void)
{
	clock_t	time0;
	clock_t time1;

	printf("d04 ex05 test_05 -- ");
	printf("Input: %d, ", 2147483647);
	time0 = clock();
	printf("Output: %d, ", ft_sqrt(2147483647));
	time1 = clock();
	printf("Expected: %d, ", 0);
	printf("Time: %lus)\n", (time1 - time0) / CLOCKS_PER_SEC);
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
