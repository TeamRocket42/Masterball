/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:33:22 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/19 17:41:58 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char **argv)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	if (argc == 4)
	{
		nbr = argv[1];
		base_from = argv[2];
		base_to = argv[3];
		printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	}
	return (0);
}
