/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:34:58 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/20 11:15:00 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);

void	test_01(void)
{
	char	*res;

	printf("d07 ex03 test_01 -- ");
	res = ft_concat_params(1, NULL);
	printf("Input: %s, ", NULL);
	printf("Output: %s, ", res);
	printf("Expected: %s\n", "");
}

void	test_02(void)
{
	char	**tab;
	char	in[] = "Masterball";
	char	*res;

	printf("d07 ex03 test_02 -- ");
	tab = (char**)malloc(sizeof(char*) * 2);
	tab[1] = (char*)malloc(sizeof(char) * 11);
	tab[1] = strcpy(tab[1], in);
	res = ft_concat_params(2, tab);
	printf("Input: \"%s\", ", in);
	printf("Output: \"%s\", ", res);
	printf("Expected: \"%s\"\n", in);

}

void	test_03(void)
{
	char	**tab;
	char	in1[] = "#Team#";
	char	in2[] = "*Rocket*";
	char	*res;

	printf("d07 ex03 test_03 -- ");
	tab = (char**)malloc(sizeof(char*) * 3);
	tab[1] = (char*)malloc(sizeof(char) * 7);
	tab[1] = strcpy(tab[1], in1);
	tab[2] = (char*)malloc(sizeof(char) * 9);
	tab[2] = strcpy(tab[2], in2);
	res = ft_concat_params(3, tab);
	printf("Input: \"%s\" \"%s\"\n", in1, in2);
	printf("Output: \"%s\"\n", res);
	printf("Expected: \"%s\n%s\"\n", in1, in2);
}

int		main()
{
	test_01();
	test_02();
	test_03();
	return (0);
}
