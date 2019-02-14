/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 09:44:50 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

void	test_01(void)
{
	char str[] = "		-42";

	printf("d03 ex08 test_01 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: %d, ", ft_atoi(str));
	printf("Expected: %d\n", atoi(str));
}

void	test_02(void)
{
	char str[] = "  ++42";

	printf("d03 ex08 test_02 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: %d, ", ft_atoi(str));
	printf("Expected: %d\n", atoi(str));
}

void	test_03(void)
{
	char str[] = "   +1789a0";

	printf("d03 ex08 test_03 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: %d, ", ft_atoi(str));
	printf("Expected: %d\n", atoi(str));
}

void	test_04(void)
{
	char str[] = "   -21474836 48";

	printf("d03 ex08 test_04 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: %d, ", ft_atoi(str));
	printf("Expected: %d\n", atoi(str));
}

void	test_05(void)
{
	char str[] = "";

	printf("d03 ex08 test_05 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: %d, ", ft_atoi(str));
	printf("Expected: %d\n", atoi(str));
}

int		main()
{
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	return (0);
}
