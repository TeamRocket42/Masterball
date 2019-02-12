/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:46:58 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 10:00:22 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int		ft_is_prime(int nb);

void	test_01(void)
{
	printf("d04 ex06 test_01 -- ");
	printf("Input: %d, ", 0);
	printf("Output: %d, ", ft_is_prime(0));
	printf("Expected: %d\n", 0);
}

void	test_02(void)
{
	printf("d04 ex06 test_02 -- ");
	printf("Input: %d, ", 1);
	printf("Output: %d, ", ft_is_prime(1));
	printf("Expected: %d\n", 0);
}

void	test_03(void)
{
	printf("d04 ex06 test_03 -- ");
	printf("Input: %d, ", -2);
	printf("Output: %d, ", ft_is_prime(-2));
	printf("Expected: %d\n", 0);
}

void	test_04(void)
{
	clock_t	time0;
	clock_t	time1;

	printf("d04 ex06 test_04 -- ");
	printf("Input: %d, ", 1640817049);
	time_0 = clock();
	printf("Output: %d, ", ft_is_prime(1640817049));
	time_1 = clock();
	printf("Expected: %d, ", 0);
	printf("Time: %ds\n", (time1 - time0) / CLOCKS_PER_SEC);
}

void	test_05(void)
{
	clock_t	time0;
	clock_t	time1;

	printf("d04 ex06 test_05 -- ");
	printf("Input: %d, ", 2147483647);
	time_0 = clock();
	printf("Output: %d, ", ft_is_prime(2147483647));
	time_1 = clock();
	printf("Expected: %d\n", 1);
	printf("Time: %ds\n", (time1 - time0) / CLOCKS_PER_SEC);
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
