/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 08:49:11 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 10:49:50 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

void	test_01(void)
{
	printf("d04 ex03 test_01 -- ");
	printf("Input: %d; %d ", 5, -1);
	printf("Output: %d, ", ft_recursive_power(5, -1));
	printf("Expected: %d\n", 0);
}

void	test_02(void)
{
	printf("d04 ex03 test_02 -- ");
	printf("Input: %d; %d ", 2, 4);
	printf("Output: %d, ", ft_recursive_power(2, 4));
	printf("Expected: %d\n", 16);
}

void	test_03(void)
{
	printf("d04 ex03 test_03 -- ");
	printf("Input: %d; %d ", 0, 0);
	printf("Output: %d, ", ft_recursive_power(0, 0));
	printf("Expected: %d\n", 1);
}

void	test_04(void)
{
	printf("d04 ex03 test_04 -- ");
	printf("Input: %d; %d ", -4, 3);
	printf("Output: %d, ", ft_recursive_power(-4, 3));
	printf("Expected: %d\n", -64);
}

void	test_05(void)
{
	printf("d04 ex03 test_05 -- ");
	printf("Input: %d; %d ", -2147483647, 0);
	printf("Output: %d, ", ft_recursive_power(-2147483647, 0));
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
