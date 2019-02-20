/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:28:46 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/14 12:55:47 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

void	test_01(void)
{
	char	str[] = "Bonjour";

	printf("d07 ex00 test_01 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: \"%s\", ", ft_strdup(str));
	printf("expected: \"%s\"\n", strdup(str));
}

int		main(void)
{
	test_01();
	return (0);
}
