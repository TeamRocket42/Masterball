/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 08:49:11 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 09:01:02 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

vvoid	test_01(void)
{
	printf("Input: %d; %d ", 5; -1);
	printf("Output: %d, ", ft_iterative_power(5, -1));
	printf("Expected: %d\n", 0);
}

void	test_02(void)
{
	printf("Input: %d; %d ", 2; 4);
	printf("Output: %d, ", ft_iterative_power(2, 4));
	printf("Expected: %d\n", 16);
}

void	test_03(void)
{
	printf("Input: %d; %d ", 0; 0);
	printf("Output: %d, ", ft_iterative_power(0, 0));
	printf("Expected: %d\n", 1);
}

void	test_04(void)
{
	printf("Input: %d; %d ", -4; 3);
	printf("Output: %d, ", ft_iterative_power(-4, 3));
	printf("Expected: %d\n", -64);
}

void	test_05(void)
{
	printf("Input: %d; %d ", -2147483647; 0);
	printf("Output: %d, ", ft_iterative_power(-2147483647, 0));
	printf("Expected: %d\n", 1);
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
