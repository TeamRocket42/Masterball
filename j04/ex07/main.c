/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:46:58 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 10:58:40 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int		ft_find_next_prime(int nb);

void	test_01(void)
{
	printf("d04 ex07 test_01 -- ");
	printf("Input: %d, ", 0);
	printf("Output: %d, ", ft_find_next_prime(0));
	printf("Expected: %d\n", 2);
}

void	test_02(void)
{
	printf("d04 ex07 test_02 -- ");
	printf("Input: %d, ", 1);
	printf("Output: %d, ", ft_find_next_prime(1));
	printf("Expected: %d\n", 2);
}

void	test_03(void)
{
	printf("d04 ex07 test_03 -- ");
	printf("Input: %d, ", 250);
	printf("Output: %d, ", ft_find_next_prime(250));
	printf("Expected: %d\n", 251);
}

void	test_04(void)
{
	clock_t	time0;
	clock_t	time1;

	printf("d04 ex07 test_04 -- ");
	printf("Input: %d, ", 1640817049);
	time0 = clock();
	printf("Output: %d, ", ft_find_next_prime(1640817049));
	time1 = clock();
	printf("Expected: %d, ", 1640817053);
	printf("Time: %lus\n", (time1 - time0) / CLOCKS_PER_SEC);
}

void	test_05(void)
{
	clock_t	time0;
	clock_t	time1;

	printf("d04 ex07 test_05 -- ");
	printf("Input: %d, ", 2147483647);
	time0 = clock();
	printf("Output: %d, ", ft_find_next_prime(2147483647));
	time1 = clock();
	printf("Expected: %d, ", 2147483647);
	printf("Time: %lus\n", (time1 - time0) / CLOCKS_PER_SEC);
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
