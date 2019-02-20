/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:30:13 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/19 15:36:50 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int ac, char **av)
{
	char	**tab;
	int		i;

	if (ac == 3)
	{
		tab = ft_split(av[1], av[2]);
		i = 0;
		while (tab[i])
			printf("%s\n", tab[i++]);
	}
	return (0);
}
