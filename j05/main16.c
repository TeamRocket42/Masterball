/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 22:25:11 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 12:26:00 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char dest[20] = "Salut";
	char dest2[20] = "Salut";
	char src[] = "ca va ?";
	printf("ft_strcat = %s\n", ft_strcat(dest, src));
	printf("rr_strcat = %s\n", strcat(dest2, src));
}
