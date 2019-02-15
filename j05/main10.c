/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:43:52 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 16:10:51 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char str[] = "salut,ComMent tu vAs ? 42mots quarantE-deux; ciNquante+eT+un";
	printf("%s", ft_strcapitalize(str));
}
