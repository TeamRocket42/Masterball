/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:54:28 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/13 21:01:20 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char dest[7] = "Salut";
	char dest2[7] = "Salut";
	char src[] = "12345";
	unsigned int len = 7;
	unsigned int res1;
	unsigned int res2;
	res1 = ft_strlcpy(dest, src, len);
	res2 = strlcpy(dest2, src, len);
	printf("ft_strlcpy = %s, return value is %d\n", dest, res1);
	printf("rr_strlcpy = %s, return value is %d\n\n", dest2, res2);

	char dest3[] = "Salut";
	char dest4[] = "Salut";
	char src2[] = "";
	len = 5;
	unsigned int res3;
	unsigned int res4;
	res3 = ft_strlcpy(dest3, src2, len);
	res4 = strlcpy(dest4, src2, len);
	printf("ft_strlcpy = %s, return value is %d\n", dest3, res3);
	printf("rr_strlcpy = %s, return value is %d\n\n", dest4, res4);

	
	char dest5[7] = "Salut";
	char dest6[7] = "Salut";
	char src3[] = "123";
	len = 7;
	unsigned int res5;
	unsigned int res6;
	res5 = ft_strlcpy(dest5, src3, len);
	res6 = strlcpy(dest6, src3, len);
	printf("ft_strlcpy = %s, return value is %d\n", dest5, res5);
	printf("rr_strlcpy = %s, return value is %d\n\n", dest6, res6);

	//char dest7[10] = "Salut";
	//char dest8[10] = "Salut";
	//ft_putchar(dest7[9] + 70);
	//char src4[] = "123456789";
	//len = 9;
	//unsigned int res7;
	//unsigned int res8;
	//res7 = ft_strlcpy(dest7, src4, len);
	//res8 = strlcpy(dest8, src4, len);
	//printf("ft_strlcpy = %s, return value is %d\n", dest7, res7);
	//printf("rr_strlcpy = %s, return value is %d\n\n", dest8, res8);
}

