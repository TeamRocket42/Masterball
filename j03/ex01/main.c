/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 19:51:21 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int nbr;
	int *p1 = &nbr;
	int *p2 = &p1;
	int *p3 = &p2;
	int *p4 = &p3;
	int *p5 = &p4;
	int *p6 = &p5;
	int *p7 = &p6;
	int *p8 = &p7;
	int *p9 = &p8;

	nbr = 0;
	ft_ultimate_ft(p9);
	printf("%d", nbr);
}
