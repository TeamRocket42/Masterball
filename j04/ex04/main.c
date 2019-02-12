/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:07:00 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 10:52:06 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

void	test_01(void)
{
	printf("d04 ex04 test_01 -- ");
	printf("Input: %d, ", -1);
	printf("Output: %d, ", ft_fibonacci(-1));
	printf("Expected: %d\n", -1);
}
void	test_02(void)
{
	printf("d04 ex04 test_02 -- ");
	printf("Input: %d, ", 0);
	printf("Output: %d, ", ft_fibonacci(0));
	printf("Expected: %d\n", 0);
}

void	test_03(void)
{
	printf("d04 ex04 test_03 -- ");
	printf("Input: %d, ", 1);
	printf("Output: %d, ", ft_fibonacci(1));
	printf("Expected: %d\n", 1);
}

void	test_04(void)
{
	printf("d04 ex04 test_04 -- ");
	printf("Input: %d, ", 5);
	printf("Output: %d, ", ft_fibonacci(5));
	printf("Expected: %d\n", 5);
}

void	test_05(void)
{
	printf("d04 ex04 test_05 -- ");
	printf("Input: %d, ", 16);
	printf("Output: %d, ", ft_fibonacci(16));
	printf("Expected: %d\n", 987);
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
