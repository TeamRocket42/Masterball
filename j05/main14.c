/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:43:52 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 16:58:16 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", ft_str_is_uppercase(str));
}
