/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:27:14 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/20 10:31:44 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

void	ft_print(int *range, int size)
{
	int		i;

	i = 0;
	printf("{ ");
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("}\n");
}

int		main(int argc, char **argv)
{
	int		**range;
	int		min;
	int		max;

	range = (int**)malloc(sizeof(int*));

	if (argc != 3)
		printf("Usage: ./a.out [min] [max]\n");
	else
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		int r = ft_ultimate_range(range, min, max);
		printf("Size = %d\n", r);
		ft_print(*range, max - min);
	}
	return (0);
}
