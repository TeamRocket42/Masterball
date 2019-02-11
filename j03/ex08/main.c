/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:21:55 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/11 20:07:49 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(char *str);

int	main()
{
	char str[] = "		-42";
	char str2[] = "  ++42";
	char str3[] = "   +1789a0";
	char str4[] = "   -2147483648";

	printf("ft_atoi = %d\n", ft_atoi(str));
	printf("rr_atoi = %d\n", atoi(str));
	printf("ft_atoi = %d\n", ft_atoi(str1));
	printf("rr_atoi = %d\n", atoi(str1));
	printf("ft_atoi = %d\n", ft_atoi(str2));
	printf("rr_atoi = %d\n", atoi(str2));
	printf("ft_atoi = %d\n", ft_atoi(str3));
	printf("rr_atoi = %d\n", atoi(str3));
	printf("ft_atoi = %d\n", ft_atoi(str4));
	printf("rr_atoi = %d\n", atoi(str4));
}
