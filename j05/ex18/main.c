/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:55:11 by scarpent          #+#    #+#             */
/*   Updated: 2019/02/13 21:03:55 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	test_01(void)
{
	char			dest[] = "";
	char			src[] = "";
	char			dest2[] = "";
	char			src2[] = "";
	unsigned int	size = 0;
	unsigned int	result;
	unsigned int	expected;

	printf("d05 ex18 test_01 -- \n");
	printf("Input: dest=\"%s\", src=\"%s\", size=%d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("Output: dest=\"%s\", result=%d\n", dest, result);
	expected = strlcat(dest2, src2, size);
	printf("Expected: dest=\"%s\", result=%d\n\n", dest2, expected);
}

void	test_02(void)
{
	char			dest[] = "a";
	char			src[] = "b";
	char			dest2[] = "a";
	char			src2[] = "b";
	unsigned int	size = 1;
	unsigned int	result;
	unsigned int	expected;

	printf("d05 ex18 test_02 -- \n");
	printf("Input: dest=\"%s\", src=\"%s\", size=%d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("Output: dest=\"%s\", result=%d\n", dest, result);
	expected = strlcat(dest2, src2, size);
	printf("Expected: dest=\"%s\", result=%d\n\n", dest2, expected);
}

void	test_03(void)
{
	char			dest[20] = "abcde";
	char			src[5] = "u";
	char			dest2[20] = "abcde";
	char			src2[5] = "u";
	unsigned int	size = 15;
	unsigned int	result;
	unsigned int	expected;

	printf("d05 ex18 test_03 -- \n");
	printf("Input: dest=\"%s\", src=\"%s\", size=%d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("Output: dest=\"%s\", result=%d\n", dest, result);
	expected = strlcat(dest2, src2, size);
	printf("Expected: dest=\"%s\", result=%d\n\n", dest2, expected);
}

void	test_04(void)
{
	char			dest[] = "abcde";
	char			src[5] = "u";
	char			dest2[] = "abcde";
	char			src2[5] = "u";
	unsigned int	size = 0;
	unsigned int	result;
	unsigned int	expected;

	printf("d05 ex18 test_04 -- \n");
	printf("Input: dest=\"%s\", src=\"%s\", size=%d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("Output: dest=\"%s\", result=%d\n", dest, result);
	expected = strlcat(dest2, src2, size);
	printf("Expected: dest=\"%s\", result=%d\n\n", dest2, expected);
}

void	test_05(void)
{
	char			dest[] = "";
	char			src[] = "";
	char			dest2[] = "";
	char			src2[] = "";
	unsigned int	size = 0;
	unsigned int	result;
	unsigned int	expected;

	printf("d05 ex18 test_05 -- \n");
	printf("Input: dest=\"%s\", src=\"%s\", size=%d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("Output: dest=\"%s\", result=%d\n", dest, result);
	expected = strlcat(dest2, src2, size);
	printf("Expected: dest=\"%s\", result=%d\n\n", dest2, expected);
}

void	test_06(void)
{
	char			dest[] = "";
	char			src[] = "";
	char			dest2[] = "";
	char			src2[] = "";
	unsigned int	size = 0;
	unsigned int	result;
	unsigned int	expected;

	printf("d05 ex18 test_06 -- \n");
	printf("Input: dest=\"%s\", src=\"%s\", size=%d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("Output: dest=\"%s\", result=%d\n", dest, result);
	expected = strlcat(dest2, src2, size);
	printf("Expected: dest=\"%s\", result=%d\n\n", dest2, expected);
}

void	test_07(void)
{
	char			dest[] = "";
	char			src[] = "";
	char			dest2[] = "";
	char			src2[] = "";
	unsigned int	size = 0;
	unsigned int	result;
	unsigned int	expected;

	printf("d05 ex18 test_07 -- \n");
	printf("Input: dest=\"%s\", src=\"%s\", size=%d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("Output: dest=\"%s\", result=%d\n", dest, result);
	expected = strlcat(dest2, src2, size);
	printf("Expected: dest=\"%s\", result=%d\n\n", dest2, expected);
}

int		main(void)
{
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	test_06();
	test_07();
	return (0);
}
