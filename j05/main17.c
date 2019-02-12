/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 22:25:11 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 12:29:14 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, int nb);

int main()
{
	char dest[20] = "Salut";
	char dest2[20] = "Salut";
	char src[] = "ca va ?";
	int len = 3;
	printf("ft_strcpy = %s\n", ft_strncat(dest, src, len));
	printf("rr_strcpy = %s\n", strncat(dest2, src, len));
}
