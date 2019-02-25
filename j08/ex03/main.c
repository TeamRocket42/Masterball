/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 21:46:06 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/18 21:47:35 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ABS(atoi(argv[1])));
	}
	return (0);
}
