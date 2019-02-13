/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 09:13:26 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);

void	test_01(void)
{
	char	str[] = "Hello";
	
	write(1, "d03 ex05 test_01 -- ", 20);
	write(1, "Input: \"Hello\", ", 16);
	write(1, "Output: \", ", 9);
	ft_putstr(str);
	write(1, "\", Expected: \"Hello\"\n", 21);
}

int		main(void)
{
	test_01();
	return (0);
}
