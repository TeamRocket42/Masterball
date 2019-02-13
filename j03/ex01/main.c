/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 08:55:23 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	test_01(void)
{
	int		nbr;
	int		*p1;
	int		**p2;
	int		***p3;
	int		****p4;
	int		*****p5;
	int		******p6;
	int		*******p7;
	int		********p8;
	int		*********p9;

	printf("d03 ex01 test_01 -- ");
	nbr = 0;
	p1 = &nbr;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
	printf("Before: %d, ", 0);
	printf("After: %d, ", nbr);
	printf("Expected: %d\n", 42);
}

int		main(void)
{
	test_01();
	return(0);
}
