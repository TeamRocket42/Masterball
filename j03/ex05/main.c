/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 20:08:22 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(void)
{
	int		i;
	char	str[5];

	i = 0;
	str[0] = 'T';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 't';
	str[4] = '\0';
	ft_putstr(str);
	printf("%s", str);
}
