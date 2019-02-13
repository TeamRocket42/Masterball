/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 08:58:09 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	test_01(void)
{
	int a;
	int b;

	printf("d03 ex02 test_01 -- ");
	a = 2;
	b = 4;
	ft_swap(&a, &b);
	printf("Input: a = %d; b = %d, ", 2, 4);
	printf("Output: a = %d; b = %d, ", a, b);
	printf("Expected: a = %d; b = %d", 4, 2);
}

int		main(void)
{
	test_01();
	return (0);
}
