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
	printf("rr_strstr = %s\n\n", strstr(str2, to_find));

	char *str3;
	str3 = "aaaaabcde";
	char *str4;
	str4 = "aaaaabcde";
	char *to_find2;
	to_find2 = "45";
	printf("ft_strstr = %s\n", ft_strstr(str3, to_find2));
	printf("rr_strstr = %s\n\n", strstr(str4, to_find2));

	char *str5;
	str5 = "aaaaabcde";
	char *str6;
	str6 = "aaaaabcde";
	char *to_find3;
	to_find3 = "";
	printf("ft_strstr = %s\n", ft_strstr(str5, to_find3));
	printf("rr_strstr = %s\n\n", strstr(str6, to_find3));

	char *str7;
	str7 = "";
	char *str8;
	str8 = "";
	char *to_find4;
	to_find4 = "45";
	printf("ft_strstr = %s\n", ft_strstr(str7, to_find4));
	printf("rr_strstr = %s\n\n", strstr(str8, to_find4));
}

