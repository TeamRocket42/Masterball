/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 09:04:12 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	test_01(void)
{
	int a;
	int b;

	printf("d03 ex04 test_01 -- ");
	a = 28;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("Input: a = %d; b = %d, ", 28, 5);
	printf("Output: a = %d; b = %d, ", a, b);
	printf("Expected: a = %d; b = %d\n", 5, 3);
}

int		main(void)
{
	test_01();
	return (0);
}
