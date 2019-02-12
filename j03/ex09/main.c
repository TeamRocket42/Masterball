/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 20:03:41 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 20:06:30 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int tab[5] = {17, 3, 0, 24, 2};
	int size;
	int i;

	size = 5;
	ft_sort_integer_table(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
