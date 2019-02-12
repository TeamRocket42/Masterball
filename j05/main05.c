/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 22:25:11 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 11:55:40 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char *str;
	str = "aaaaabcde";
	char *str2;
	str2 = "aaaaabcde";
	char *to_find;
	to_find = "abc";
	printf("ft_strstr = %s\n", ft_strstr(str, to_find));
	printf("rr_strstr = %s\n", strstr(str2, to_find));
}
