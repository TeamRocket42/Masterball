/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 08:39:09 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 10:43:51 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

void	test_01(void)
{
	printf("d04 ex01 test_01 -- ");
	printf("Input: %d, ", 5);
	printf("Output: %d, ", ft_recursive_factorial(5));
	printf("Expected: %d\n", 120);
}

void	test_02(void)
{
	printf("d04 ex01 test_02 -- ");
	printf("Input: %d, ", 12);
	printf("Output: %d, ", ft_recursive_factorial(12));
	printf("Expected: %d\n", 479001600);
}

void	test_03(void)
{
	printf("d04 ex01 test_03 -- ");
	printf("Input: %d, ", 13);
	printf("Output: %d, ", ft_recursive_factorial(13));
	printf("Expected: %d\n", 0);
}

void	test_04(void)
{
	printf("d04 ex01 test_04 -- ");
	printf("Input: %d, ", -1);
	printf("Output: %d, ", ft_recursive_factorial(-1));
	printf("Expected: %d\n", 0);
}

void	test_05(void)
{
	printf("d04 ex01 test_05 -- ");
	printf("Input: %d, ", 0);
	printf("Output: %d, ", ft_recursive_factorial(0));
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
