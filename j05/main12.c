/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:43:52 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 12:15:52 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char str[] = "1234567890";
	char str2[] = "/123";
	char str3[] = "";
	printf("Expected : 1, result = %d\n", ft_str_is_numeric(str));
	printf("Expected : 0, result = %d\n", ft_str_is_numeric(str2));
	printf("Expected : 1, result = %d\n", ft_str_is_numeric(str3));
}
