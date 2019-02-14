/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 22:25:11 by hehlinge          #+#    #+#             */
/*   Updated: 2019/02/12 12:04:57 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1[] = "123456";
	char s2[] = "abcd";
	printf("ft_strncmp = %d\n", ft_strncmp(s1, s2, 3));
	printf("rr_strncmp = %d\n", strncmp(s1, s2, 3));
}
