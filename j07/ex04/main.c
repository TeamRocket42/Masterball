/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:46:20 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/18 14:49:16 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	**tab;

	if (argc == 2)
	{
		tab = ft_split_whitespaces(argv[1]);
		while (*tab)
		{
			printf("%s\n", *tab);
			tab++;
		}
	}
	return (0);
}
