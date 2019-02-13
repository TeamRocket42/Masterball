/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:08:57 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/12 16:30:33 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

void	test_01(void)
{
	printf("d05 ex21 test_01 -- ");
	printf("Input: %s %s, ", "12874", "0123456789ABCDEFGHIJKLMNO");
	printf("Output: %d, ", ft_atoi_base("12874", "0123456789ABCDEFGHIJKLMNO"));
	printf("Expected: %d\n", 427054);
}

void	test_02(void)
{
	printf("d05 ex21 test_02 -- ");
	printf("Input: %s %s, ", "-2A", "0123456789ABCDEF");
	printf("Output: %d, ", ft_atoi_base("-2A", "0123456789ABCDEF"));
	printf("Expected: %d\n", -42);
}

void	test_03(void)
{
	printf("d05 ex21 test_03 -- ");
	printf("Input: %s %s, ", "42", "574");
	printf("Output: %d, ", ft_atoi_base("42", "754"));
	printf("Expected: %d\n", 0);
}

void	test_04(void)
{
	printf("d05 ex21 test_04 -- ");
	printf("Input: %s %s, ", "##$@)!", "!@)%$#");
	printf("Output: %d, ", ft_atoi_base("##$@)!", "!@)%$#"));
	printf("Expected: %d\n", 46272);
}

void	test_05(void)
{
	printf("d05 ex21 test_05 -- ");
	printf("Input: %s %s, ", "11001+1", "01");
	printf("Output: %d, ", ft_atoi_base("11001+1", "01"));
	printf("Expected: %d\n", 0);
}

void	test_06(void)
{
	printf("d05 ex21 test_06 -- ");
	printf("Input: %s %s, ", "+101010", "01");
	printf("Output: %d, ", ft_atoi_base("+101010", "01"));
	printf("Expected: %d\n", 42);
}

void	test_07(void)
{
	printf("d05 ex21 test_07 -- ");
	printf("Input: %s %s, ", "7777", "7");
	printf("Output: %d, ", ft_atoi_base("7777", "7"));
	printf("Expected: %d\n", 0);
}

void	test_08(void)
{
	printf("d05 ex21 test_07 -- ");
	printf("Input: %s %s, ", "2012", "012334");
	printf("Output: %d, ", ft_atoi_base("2012", "012334"));
	printf("Expected: %d\n", 0);
}

int		main(void)
{
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	test_06();
	test_07();
	test_08();
	return (0);
}
