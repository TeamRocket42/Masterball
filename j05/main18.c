/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 22:25:11 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 21:48:51 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[7] = "Salut";
	//char dest2[7] = "Salut";
	char src[] = "111111?";
	unsigned int len = 7;
	unsigned int res1;
	//unsigned int res2;
	res1 = ft_strlcat(dest, src, len);
	//res2 = strlcat(dest2, src, len);
	printf("ft_strlcat = %s, return value is %d\n", dest, res1);
	//printf("rr_strlcat = %s, return value is %d\n", dest2, res2);
}
