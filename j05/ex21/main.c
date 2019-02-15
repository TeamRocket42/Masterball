/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:08:57 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/14 12:34:16 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

void	test_01(void)
{
	printf("d05 ex21 test_01 -- ");
	printf("Input: %s %s, ", "-0000F", "0-23456789ABCDEF");
	printf("Output: %d, ", ft_atoi_base("-0000F", "0-23456789ABCDEF"));
	printf("Expected: %d\n", 0);
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
	printf("Input: %s %s, ", "+42", "574");
	printf("Output: %d, ", ft_atoi_base("+42", "754"));
	printf("Expected: %d\n", 0);
}

void	test_04(void)
{
	printf("d05 ex21 test_04 -- ");
	printf("Input: %s %s, ", "+##$@)!", "!@)%$#");
	printf("Output: %d, ", ft_atoi_base("+##$@)!", "!@)%$#"));
	printf("Expected: %d\n", 46272);
}

void	test_05(void)
{
	printf("d05 ex21 test_05 -- ");
	printf("Input: %s %s, ", "11001+1", "01");
	printf("Output: %d, ", ft_atoi_base("11001+1", "01"));
	printf("Expected: %d\n", 25);
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

void	test_09(void)
{
	printf("d05 ex21 test_01 -- ");
	printf("Input: %s %s, ", "-0000F", "0-23456789ABCDEF");
	printf("Output: %d, ", ft_atoi_base("-0000F", "0-23456789ABCDEF"));
	printf("Expected: %d\n", 0);
}

void	test_10(void)
{
	printf("d05 ex21 test_01 -- ");
	printf("Input: %s %s, ", "-0000F", "0+23456789ABCDEF");
	printf("Output: %d, ", ft_atoi_base("-0000F", "0+23456789ABCDEF"));
	printf("Expected: %d\n", 0);
}

void	test_11(void)
{
	printf("d05 ex21 test_01 -- ");
	printf("Input: %s %s, ", "2-A", "0123456789ABCDEF");
	printf("Output: %d, ", ft_atoi_base("2-A", "0123456789ABCDEF"));
	printf("Expected: %d\n", 2);
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
	test_09();
	test_10();
	test_11();
	return (0);
}
